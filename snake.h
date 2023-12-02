#pragma once

#include "apple.h"
#include "direction.h"
#include "point.h"
#include <iostream>

class Snake {
    Point _segments[100];
    int _nr_segments;

public:
    // Constructors
    Snake();
    Snake(const Point &_position);
    Snake(const Snake &other);
    Snake &operator=(const Snake &other);

    // Destructor
    ~Snake();

    // Member functions
    void Move(Direction direction);
    int GetSize() const;
    Point GetPosition() const;
    void Eat(const Apple &apple);

    // Comparison operator
    bool operator==(const Snake &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, Snake &snake);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const Snake &snake);
};
