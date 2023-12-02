#include "apple.h"

// Default constructor
Apple::Apple() : _position() {}

// Constructor with parameters
Apple::Apple(const Point &position) : _position(position) {}

// Copy constructor
Apple::Apple(const Apple &other) : _position(other._position) {}

// Copy assignment operator
Apple &Apple::operator=(const Apple &other) {
    if (this != &other) {
        _position = other._position;
    }
    return *this;
}

// Comparison operator
bool Apple::operator==(const Apple &other) const {
    return _position == other._position;
}

// Input operator
std::istream &operator>>(std::istream &is, Apple &apple) {
    is >> apple._position;
    return is;
}

// Output operator
std::ostream &operator<<(std::ostream &os, const Apple &apple) {
    os << "Apple at position: " << apple._position;
    return os;
}

// Getter function
Point Apple::GetPosition() const {
    return _position;
}
