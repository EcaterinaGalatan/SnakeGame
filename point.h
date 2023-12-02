#pragma once
#include <iostream>

struct Point {
    int x;
    int y;

    // Default constructor
    Point();

    // Constructor with parameters
    Point(int xVal, int yVal);

    // Copy constructor
    Point(const Point &other);

    // Copy assignment operator
    Point &operator=(const Point &other);

    // Comparison operator
    bool operator==(const Point &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, Point &point);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const Point &point);
};
