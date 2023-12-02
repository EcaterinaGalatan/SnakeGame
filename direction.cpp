#include "direction.h"
#include <stdexcept>

/**
 * @file direction.cpp
 * @brief Implementation of the Direction operators.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

/**
 * @brief Output operator for Direction.
 * @param os The output stream.
 * @param direction The Direction value to be written.
 * @return The output stream after writing the Direction.
 */
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

/**
 * @brief Input operator for Direction.
 * @param is The input stream.
 * @param direction The Direction value to be read.
 * @return The input stream after reading the Direction.
 */
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
