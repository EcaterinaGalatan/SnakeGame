#pragma once
#include <iostream>

enum class Direction {
    Top, Left, Right, Bottom
};

// Output operator
std::ostream &operator<<(std::ostream &os, const Direction &direction);

// Input operator
std::istream &operator>>(std::istream &is, Direction &direction);
