#pragma once

#include "apple.h"
#include "direction.h"
#include "point.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Snake {
    std::vector<Point> _segments;
    int _nr_segments;
    std::string _name;

public:
    // Constructors
    Snake();
    Snake(const Point &_position, const std::string &name);
    Snake(const Snake &other);
    Snake &operator=(const Snake &other);

    // Destructor
    ~Snake();

    // Member functions
    void Move(Direction direction);
    int GetSize() const;
    Point GetHeadPosition() const;
    void Eat(const Apple &apple);

    // Additional functions using STL algorithms
    bool ContainsPosition(const Point &position) const;
    void SortSegments();
    void CopyFrom(const Snake &other);
    bool operator<(const Snake &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, Snake &snake);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const Snake &snake);
};
