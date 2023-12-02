#pragma once
#include "apple.h"
#include "snake.h"
#include "board.h"
#include <iostream>

/**
 * @file game_engine.h
 * @brief Definition of the GameEngine class.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class GameEngine {
    Apple _apple; ///< The Apple object in the game.
    Snake _snake; ///< The Snake object in the game.
    Board _board; ///< The Board object representing the game area.

public:
    /**
     * @brief Default constructor for GameEngine.
     */
    GameEngine();

    /**
     * @brief Constructor with parameters for GameEngine.
     * @param apple The Apple object in the game.
     * @param snake The Snake object in the game.
     * @param board The Board object representing the game area.
     */
    GameEngine(const Apple &apple, const Snake &snake, const Board &board);

    /**
     * @brief Copy constructor for GameEngine.
     * @param other The GameEngine object to be copied.
     */
    GameEngine(const GameEngine &other);

    /**
     * @brief Copy assignment operator for GameEngine.
     * @param other The GameEngine object to be assigned.
     * @return A reference to the assigned GameEngine.
     */
    GameEngine &operator=(const GameEngine &other);

    /**
     * @brief Destructor for GameEngine.
     */
    ~GameEngine();

    /**
     * @brief Initialize the game engine.
     */
    void Init();

    /**
     * @brief Run the game engine.
     */
    void Run();

    /**
     * @brief Comparison operator for GameEngine.
     * @param other The GameEngine object to be compared.
     * @return True if the GameEngines are equal, false otherwise.
     */
    bool operator==(const GameEngine &other) const;

    /**
     * @brief Input operator for GameEngine.
     * @param is The input stream.
     * @param gameEngine The GameEngine object to be read.
     * @return The input stream after reading the GameEngine.
     */
    friend std::istream &operator>>(std::istream &is, GameEngine &gameEngine);

    /**
     * @brief Output operator for GameEngine.
     * @param os The output stream.
     * @param gameEngine The GameEngine object to be written.
     * @return The output stream after writing the GameEngine.
     */
    friend std::ostream &operator<<(std::ostream &os, const GameEngine &gameEngine);
};
