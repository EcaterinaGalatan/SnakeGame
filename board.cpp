#include "board.h"

/**
 * @file board.cpp
 * @brief Реализация функций класса Board.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

// Конструктор по умолчанию
Board::Board() : _width(20), _height(20) {}

// Конструктор с параметрами
Board::Board(int width, int height) : _width(width), _height(height) {}

// Конструктор копирования
Board::Board(const Board &other) : _width(other._width), _height(other._height) {}

// Оператор присваивания копирования
Board &Board::operator=(const Board &other) {
    if (this != &other) {
        _width = other._width;
        _height = other._height;
    }
    return *this;
}

// Функция-геттер для ширины
int Board::GetWidth() const {
    return _width;
}

// Функция-геттер для высоты
int Board::GetHeight() const {
    return _height;
}

// Оператор сравнения
bool Board::operator==(const Board &other) const {
    return (_width == other._width) && (_height == other._height);
}

// Оператор ввода
std::istream &operator>>(std::istream &is, Board &board) {
    is >> board._width >> board._height;
    return is;
}

// Оператор вывода
std::ostream &operator<<(std::ostream &os, const Board &board) {
    os << "Доска с шириной: " << board._width << ", высотой: " << board._height;
    return os;
}
