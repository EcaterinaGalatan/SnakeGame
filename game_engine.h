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
    // Constructors
    GameEngine();
    GameEngine(const Apple &apple, const Snake &snake, const Board &board);
    GameEngine(const GameEngine &other);
    GameEngine &operator=(const GameEngine &other);

    // Destructor
    ~GameEngine();

    // Member functions
    void Init();
    void Run();

    // Comparison operator
    bool operator==(const GameEngine &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, GameEngine &gameEngine);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const GameEngine &gameEngine);
};
