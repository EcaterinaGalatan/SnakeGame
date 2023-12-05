#include "apple.h"

/**
 * @file apple.cpp
 * @brief Реализация функций класса Apple.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

// Конструктор по умолчанию
Apple::Apple() : _position() {}

// Конструктор с параметрами
Apple::Apple(const Point &position) : _position(position) {}

// Конструктор копирования
Apple::Apple(const Apple &other) : _position(other._position) {}

// Оператор присваивания копирования
Apple &Apple::operator=(const Apple &other) {
    if (this != &other) {
        _position = other._position;
    }
    return *this;
}

// Оператор сравнения
bool Apple::operator==(const Apple &other) const {
    return _position == other._position;
}

// Оператор ввода
std::istream &operator>>(std::istream &is, Apple &apple) {
    is >> apple._position;
    return is;
}

// Оператор вывода
std::ostream &operator<<(std::ostream &os, const Apple &apple) {
    os << "Яблоко на позиции: " << apple._position;
    return os;
}

// Функция-геттер
Point Apple::GetPosition() const {
    return _position;
}
