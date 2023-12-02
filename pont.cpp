#include "point.h"

// Default constructor
Point::Point() : x(0), y(0) {}

// Constructor with parameters
Point::Point(int xVal, int yVal) : x(xVal), y(yVal) {}

// Copy constructor
Point::Point(const Point &other) : x(other.x), y(other.y) {}

// Copy assignment operator
Point &Point::operator=(const Point &other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

// Comparison operator
bool Point::operator==(const Point &other) const {
    return (x == other.x) && (y == other.y);
}

// Input operator
std::istream &operator>>(std::istream &is, Point &point) {
    is >> point.x >> point.y;
    return is;
}

// Output operator
std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}
