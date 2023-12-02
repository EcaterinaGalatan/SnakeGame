#pragma once
#include <iostream>

class Board {
    int _width;
    int _height;

public:
    // Constructors
    Board();
    Board(int width, int height);
    Board(const Board &other);
    Board &operator=(const Board &other);

    // Getter functions
    int GetWidth() const;
    int GetHeight() const;

    // Comparison operator
    bool operator==(const Board &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, Board &board);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const Board &board);
};
