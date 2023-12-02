#include "snake.h"
#include <iterator>

// Default constructor
Snake::Snake() : _nr_segments(0), _name("") {}

// Constructor with parameters
Snake::Snake(const Point &_position, const std::string &name) : _nr_segments(1), _name(name) {
    _segments.push_back(_position);
}

// Copy constructor
Snake::Snake(const Snake &other) : _nr_segments(other._nr_segments), _name(other._name) {
    std::copy(other._segments.begin(), other._segments.end(), std::back_inserter(_segments));
}

// Copy assignment operator
Snake &Snake::operator=(const Snake &other) {
    if (this != &other) {
        _nr_segments = other._nr_segments;
        _name = other._name;
        _segments.clear();
        std::copy(other._segments.begin(), other._segments.end(), std::back_inserter(_segments));
    }
    return *this;
}

// Destructor
Snake::~Snake() {
    // No dynamic memory to release, so no explicit cleanup needed
}

// Member function: Move
void Snake::Move(Direction direction) {
    int delta_x = 0, delta_y = 0;

    switch (direction) {
        case Direction::Top:
            delta_y = -1;
            break;
        case Direction::Bottom:
            delta_y = 1;
            break;
        case Direction::Left:
            delta_x = -1;
            break;
        case Direction::Right:
            delta_x = 1;
            break;
    }

    std::transform(_segments.begin() + 1, _segments.end(), _segments.begin(),
                   [_delta_x = delta_x, _delta_y = delta_y](const Point &prev) {
                       return Point{prev.x + _delta_x, prev.y + _delta_y};
                   });
}

// Member function: GetSize
int Snake::GetSize() const {
    return static_cast<int>(_segments.size());
}

// Member function: GetHeadPosition
Point Snake::GetHeadPosition() const {
    if (!_segments.empty()) {
        return _segments.front();
    }
    return Point(); // Handle the case where the snake has no segments
}

// Member function: Eat
void Snake::Eat(const Apple &apple) {
    if (_nr_segments < _segments.size()) {
        _segments.push_back(apple.GetPosition());
        _nr_segments++;
    }
}

// Additional functions using STL algorithms

// Check if the snake contains a specific position
bool Snake::ContainsPosition(const Point &position) const {
    return std::find(_segments.begin(), _segments.end(), position) != _segments.end();
}

// Sort the segments based on x and y coordinates
void Snake::SortSegments() {
    std::sort(_segments.begin(), _segments.end());
}

// Copy segments from another snake
void Snake::CopyFrom(const Snake &other) {
    _segments.clear();
    std::copy(other._segments.begin(), other._segments.end(), std::back_inserter(_segments));
    _nr_segments = other._nr_segments;
}

// Comparison operator for less-than
bool Snake::operator<(const Snake &other) const {
    return _name < other._name;
}

// Input operator
std::istream &operator>>(std::istream &is, Snake &snake) {
    is >> snake._name >> snake._nr_segments;

    snake._segments.clear();
    std::copy_n(std::istream_iterator<Point>(is), snake._nr_segments, std::back_inserter(snake._segments));

    return is;
}

// Output operator
std::ostream &operator<<(std::ostream &os, const Snake &snake) {
    os << "Snake " << snake._name << " with " << snake._nr_segments << " segments:";
    std::for_each(snake._segments.begin(), snake._segments.end(), [&os](const Point &segment) {
        os << " " << segment;
    });
    return os;
}
