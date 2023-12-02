#pragma once
#include <iostream>

/**
 * @file point.h
 * @brief Definition of the Point struct.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

struct Point {
    int x; ///< X-coordinate of the point.
    int y; ///< Y-coordinate of the point.

    /**
     * @brief Default constructor for Point.
     */
    Point();

    /**
     * @brief Constructor with parameters for Point.
     * @param xVal The x-coordinate value.
     * @param yVal The y-coordinate value.
     */
    Point(int xVal, int yVal);

    /**
     * @brief Copy constructor for Point.
     * @param other The Point object to be copied.
     */
    Point(const Point &other);

    /**
     * @brief Copy assignment operator for Point.
     * @param other The Point object to be assigned.
     * @return A reference to the assigned Point.
     */
    Point &operator=(const Point &other);

    /**
     * @brief Comparison operator for Point.
     * @param other The Point object to be compared.
     * @return True if the points are equal, false otherwise.
     */
    bool operator==(const Point &other) const;

    /**
     * @brief Input operator for Point.
     * @param is The input stream.
     * @param point The Point object to be read.
     * @return The input stream after reading the Point.
     */
    friend std::istream &operator>>(std::istream &is, Point &point);

    /**
     * @brief Output operator for Point.
     * @param os The output stream.
     * @param point The Point object to be written.
     * @return The output stream after writing the Point.
     */
    friend std::ostream &operator<<(std::ostream &os, const Point &point);
};
