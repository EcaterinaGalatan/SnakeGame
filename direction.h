#pragma once
#include <iostream>

enum class Direction {
    Top, Left, Right, Bottom
};

// Оператор вывода
std::ostream &operator<<(std::ostream &os, const Direction &direction);

// Оператор ввода
std::istream &operator>>(std::istream &is, Direction &direction);
