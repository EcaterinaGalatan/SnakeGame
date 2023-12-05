#include "game_engine.h"

/**
 * @file game_engine.cpp
 * @brief Реализация функций класса GameEngine.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

// Конструктор по умолчанию
GameEngine::GameEngine() {}

// Конструктор с параметрами
GameEngine::GameEngine(const Apple &apple, const Snake &snake, const Board &board)
    : _apple(apple), _snake(snake), _board(board) {}

// Конструктор копирования
GameEngine::GameEngine(const GameEngine &other)
    : _apple(other._apple), _snake(other._snake), _board(other._board) {}

// Оператор присваивания копирования
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
    // Освобождение любых динамически выделенных ресурсов
}

// Метод класса: Init
void GameEngine::Init() {
    // Реализация метода Init
}

// Метод класса: Run
void GameEngine::Run() {
    // Реализация метода Run
}

// Оператор сравнения
bool GameEngine::operator==(const GameEngine &other) const {
    return (_apple == other._apple) && (_board == other._board);
}
