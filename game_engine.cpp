#include "game_engine.h"

// Default constructor
GameEngine::GameEngine() {}

// Constructor with parameters
GameEngine::GameEngine(const Apple &apple, const Snake &snake, const Board &board)
    : _apple(apple), _snake(snake), _board(board) {}

// Copy constructor
GameEngine::GameEngine(const GameEngine &other)
    : _apple(other._apple), _snake(other._snake), _board(other._board) {}

// Copy assignment operator
GameEngine &GameEngine::operator=(const GameEngine &other) {
    if (this != &other) {
        _apple = other._apple;
        _snake = other._snake;
        _board = other._board;
    }
    return *this;
}

// Destructor
GameEngine::~GameEngine() {
    // Release any dynamically allocated resources
}

// Member function: Init
void GameEngine::Init() {
    // Implementation of Init
}

// Member function: Run
void GameEngine::Run() {
    // Implementation of Run
}

// Comparison operator
bool GameEngine::operator==(const GameEngine &other) const {
    return (_apple == other._apple) && (_board == other._board);
}
