#pragma once
#include "point.h"
#include <iostream>

class Apple {
    Point _position;

public:
    // Конструктор по умолчанию
    Apple();

    // Конструктор с параметрами
    Apple(const Point &position);

    // Конструктор копирования
    Apple(const Apple &other);

    // Оператор копирования
    Apple &operator=(const Apple &other);

    // Оператор сравнения
    bool operator==(const Apple &other) const;

    // Оператор ввода
    friend std::istream &operator>>(std::istream &is, Apple &apple);

    // Оператор вывода
    friend std::ostream &operator<<(std::ostream &os, const Apple &apple);

    // Getter function
    Point GetPosition() const;
};
