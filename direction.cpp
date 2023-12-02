#include "direction.h"
#include <stdexcept> // For std::invalid_argument

// Output operator
std::ostream &operator<<(std::ostream &os, const Direction &direction) {
    switch (direction) {
        case Direction::Top:
            os << "Top";
            break;
        case Direction::Left:
            os << "Left";
            break;
        case Direction::Right:
            os << "Right";
            break;
        case Direction::Bottom:
            os << "Bottom";
            break;
        default:
            throw std::invalid_argument("Invalid direction");
    }
    return os;
}

// Input operator
std::istream &operator>>(std::istream &is, Direction &direction) {
    std::string input;
    is >> input;

    if (input == "Top") {
        direction = Direction::Top;
    } else if (input == "Left") {
        direction = Direction::Left;
    } else if (input == "Right") {
        direction = Direction::Right;
    } else if (input == "Bottom") {
        direction = Direction::Bottom;
    } else {
        throw std::invalid_argument("Invalid direction input");
    }

    return is;
}
