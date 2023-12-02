#pragma once

#include "apple.h"
#include "direction.h"
#include "point.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/**
 * @file snake.h
 * @brief Definition of the Snake class.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class Snake {
    std::vector<Point> _segments; ///< Vector of Point representing the segments of the snake.
    int _nr_segments; ///< The number of segments in the snake.
    std::string _name; ///< The name of the snake.

public:
    /**
     * @brief Default constructor for Snake.
     */
    Snake();

    /**
     * @brief Constructor with parameters for Snake.
     * @param _position The initial position of the snake.
     * @param name The name of the snake.
     */
    Snake(const Point &_position, const std::string &name);

    /**
     * @brief Copy constructor for Snake.
     * @param other The Snake object to be copied.
     */
    Snake(const Snake &other);

    /**
     * @brief Copy assignment operator for Snake.
     * @param other The Snake object to be assigned.
     * @return A reference to the assigned Snake.
     */
    Snake &operator=(const Snake &other);

    /**
     * @brief Destructor for Snake.
     */
    ~Snake();

    /**
     * @brief Move the snake in a given direction.
     * @param direction The direction in which the snake should move.
     */
    void Move(Direction direction);

    /**
     * @brief Get the size of the snake.
     * @return The number of segments in the snake.
     */
    int GetSize() const;

    /**
     * @brief Get the position of the snake's head.
     * @return The position of the head segment.
     */
    Point GetHeadPosition() const;

    /**
     * @brief Make the snake eat an apple, increasing its size.
     * @param apple The Apple object to be eaten.
     */
    void Eat(const Apple &apple);

    /**
     * @brief Check if the snake contains a specific position.
     * @param position The position to check.
     * @return True if the snake contains the position, false otherwise.
     */
    bool ContainsPosition(const Point &position) const;

    /**
     * @brief Sort the segments of the snake.
     */
    void SortSegments();

    /**
     * @brief Copy segments from another snake.
     * @param other The Snake object to copy segments from.
     */
    void CopyFrom(const Snake &other);

    /**
     * @brief Comparison operator for less-than.
     * @param other The Snake object to compare.
     * @return True if this snake is less than the other, false otherwise.
     */
    bool operator<(const Snake &other) const;

    /**
     * @brief Input operator for Snake.
     * @param is The input stream.
     * @param snake The Snake object to be read.
     * @return The input stream after reading the Snake.
     */
    friend std::istream &operator>>(std::istream &is, Snake &snake);

    /**
     * @brief Output operator for Snake.
     * @param os The output stream.
     * @param snake The Snake object to be written.
     * @return The output stream after writing the Snake.
     */
    friend std::ostream &operator<<(std::ostream &os, const Snake &snake);
};
