#pragma once
#include "apple.h"
#include "snake.h"
#include "board.h"
#include <iostream>

class GameEngine {
    Apple _apple;
    Snake _snake;
    Board _board;

public:
    // Конструкторы
    GameEngine();
    GameEngine(const Apple &apple, const Snake &snake, const Board &board);
    GameEngine(const GameEngine &other);
    GameEngine &operator=(const GameEngine &other);

    // Деструктор
    ~GameEngine();

    // Методы класса
    void Init();
    void Run();

    // Оператор сравнения
    bool operator==(const GameEngine &other) const;

    // Оператор ввода
    friend std::istream &operator>>(std::istream &is, GameEngine &gameEngine);

    // Оператор вывода
    friend std::ostream &operator<<(std::ostream &os, const GameEngine &gameEngine);
};
