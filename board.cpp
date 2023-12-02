#include "board.h"

// Default constructor
Board::Board() : _width(20), _height(20) {}

// Constructor with parameters
Board::Board(int width, int height) : _width(width), _height(height) {}

// Copy constructor
Board::Board(const Board &other) : _width(other._width), _height(other._height) {}

// Copy assignment operator
Board &Board::operator=(const Board &other) {
    if (this != &other) {
        _width = other._width;
        _height = other._height;
    }
    return *this;
}

// Getter function for width
int Board::GetWidth() const {
    return _width;
}

// Getter function for height
int Board::GetHeight() const {
    return _height;
}

// Comparison operator
bool Board::operator==(const Board &other) const {
    return (_width == other._width) && (_height == other._height);
}

// Input operator
std::istream &operator>>(std::istream &is, Board &board) {
    is >> board._width >> board._height;
    return is;
}

// Output operator
std::ostream &operator<<(std::ostream &os, const Board &board) {
    os << "Board with width: " << board._width << ", height: " << board._height;
    return os;
}
