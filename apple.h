#pragma once
#include "point.h"
#include <iostream>

class Apple {
    Point _position;

public:
    // Default constructor
    Apple();

    // Constructor with parameters
    Apple(const Point &position);

    // Copy constructor
    Apple(const Apple &other);

    // Copy assignment operator
    Apple &operator=(const Apple &other);

    // Comparison operator
    bool operator==(const Apple &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, Apple &apple);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const Apple &apple);

    // Getter function
    Point GetPosition() const;

    int stuff(int a, int b);
};

