#pragma once
#include "point.h"
#include <iostream>

/**
 * @file apple.h
 * @brief Definition of the Apple class.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class Apple {
    Point _position; ///< Position of the Apple.

public:
    /**
     * @brief Default constructor for Apple.
     */
    Apple();

    /**
     * @brief Constructor with parameters for Apple.
     * @param position The position of the Apple.
     */
    Apple(const Point &position);

    /**
     * @brief Copy constructor for Apple.
     * @param other The Apple object to be copied.
     */
    Apple(const Apple &other);

    /**
     * @brief Copy assignment operator for Apple.
     * @param other The Apple object to be assigned.
     * @return A reference to the assigned Apple.
     */
    Apple &operator=(const Apple &other);

    /**
     * @brief Comparison operator for Apple.
     * @param other The Apple object to be compared.
     * @return True if the Apples are equal, false otherwise.
     */
    bool operator==(const Apple &other) const;

    /**
     * @brief Input operator for Apple.
     * @param is The input stream.
     * @param apple The Apple object to be read.
     * @return The input stream after reading the Apple.
     */
    friend std::istream &operator>>(std::istream &is, Apple &apple);

    /**
     * @brief Output operator for Apple.
     * @param os The output stream.
     * @param apple The Apple object to be written.
     * @return The output stream after writing the Apple.
     */
    friend std::ostream &operator<<(std::ostream &os, const Apple &apple);

    /**
     * @brief Getter function to retrieve the position of the Apple.
     * @return The position of the Apple.
     */
    Point GetPosition() const;
};
