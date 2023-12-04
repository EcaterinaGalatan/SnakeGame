#include "game_engine.h"

// Конструктор по умолчанию
GameEngine::GameEngine() {}

// Коструктор с параметрами
GameEngine::GameEngine(const Apple &apple, const Snake &snake, const Board &board)
    : _apple(apple), _snake(snake), _board(board) {}

// Конструктор копирования
GameEngine::GameEngine(const GameEngine &other)
    : _apple(other._apple), _snake(other._snake), _board(other._board) {}

// Оператор копирования
GameEngine &GameEngine::operator=(const GameEngine &other) {
    if (this != &other) {
        _apple = other._apple;
        _snake = other._snake;
        _board = other._board;
    }
    return *this;
}

// Деструктор
GameEngine::~GameEngine() {
    // Код для освобождения (или возврата) ресурсов, которые были выделены динамически
}

// Метод класса: Init
void GameEngine::Init() {
    // Implementation of Init
}

// Метод класса: Run
void GameEngine::Run() {
    // Implementation of Run
}

// Оператор сравнения
bool GameEngine::operator==(const GameEngine &other) const {
    return (_apple == other._apple) && (_snake == other._snake) && (_board == other._board);
}

// Оператор ввода
std::istream &operator>>(std::istream &is, GameEngine &gameEngine) {
    // Implement input logic if needed
    return is;
}

// Оператор вывода
std::ostream &operator<<(std::ostream &os, const GameEngine &gameEngine) {
    // Implement output logic if needed
    return os;
}
