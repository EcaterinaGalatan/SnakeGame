#include "snake.h"

// Default constructor
Snake::Snake() : _nr_segments(0) {}

// Constructor with parameters
Snake::Snake(const Point &_position) : _nr_segments(1) {
    _segments[0] = _position;
}

// Copy constructor
Snake::Snake(const Snake &other) : _nr_segments(other._nr_segments) {
    for (int i = 0; i < _nr_segments; ++i) {
        _segments[i] = other._segments[i];
    }
}

// Copy assignment operator
Snake &Snake::operator=(const Snake &other) {
    if (this != &other) {
        _nr_segments = other._nr_segments;
        for (int i = 0; i < _nr_segments; ++i) {
            _segments[i] = other._segments[i];
        }
    }
    return *this;
}

// Destructor
Snake::~Snake() {
    // Release any dynamically allocated resources
}

// Member function: Move
void Snake::Move(Direction direction) {
    // Implementation of Move
}

// Member function: GetSize
int Snake::GetSize() const {
    return _nr_segments;
}

// Member function: GetPosition
Point Snake::GetPosition() const {
    if (_nr_segments > 0) {
        return _segments[0];
    }
    // Handle the case where the snake has no segments
    return Point();
}

// Member function: Eat
void Snake::Eat(const Apple &apple) {
    // Implementation of Eat
}

// Comparison operator
bool Snake::operator==(const Snake &other) const {
    if (_nr_segments != other._nr_segments) {
        return false;
    }

    for (int i = 0; i < _nr_segments; ++i) {
        if (!(_segments[i] == other._segments[i])) {
            return false;
        }
    }

    return true;
}

// Input operator
std::istream &operator>>(std::istream &is, Snake &snake) {
    // Implement input logic if needed
    return is;
}

// Output operator
std::ostream &operator<<(std::ostream &os, const Snake &snake) {
    // Implement output logic if needed
    return os;
}
