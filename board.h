#pragma once
#include <iostream>

class Board {
    int _width;
    int _height;

public:
    // Конструкторы
    Board();
    Board(int width, int height);
    Board(const Board &other);
    Board &operator=(const Board &other);

    // Getter functions
    int GetWidth() const;
    int GetHeight() const;

    // Оператор сравнения
    bool operator==(const Board &other) const;

    // Оператор вывода
    friend std::istream &operator>>(std::istream &is, Board &board);

    // Оператор ввода
    friend std::ostream &operator<<(std::ostream &os, const Board &board);
};
