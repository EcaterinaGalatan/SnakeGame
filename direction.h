#pragma once
#include <iostream>

/**
 * @file direction.h
 * @brief Definition of the Direction enumeration and related operators.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

enum class Direction {
    Top, ///< Top direction.
    Left, ///< Left direction.
    Right, ///< Right direction.
    Bottom ///< Bottom direction.
};

/**
 * @brief Output operator for Direction.
 * @param os The output stream.
 * @param direction The Direction value to be written.
 * @return The output stream after writing the Direction.
 */
std::ostream &operator<<(std::ostream &os, const Direction &direction);

/**
 * @brief Input operator for Direction.
 * @param is The input stream.
 * @param direction The Direction value to be read.
 * @return The input stream after reading the Direction.
 */
std::istream &operator>>(std::istream &is, Direction &direction);
