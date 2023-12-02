#pragma once
#include <iostream>

/**
 * @file board.h
 * @brief Definition of the Board class.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class Board {
    int _width; ///< Width of the Board.
    int _height; ///< Height of the Board.

public:
    /**
     * @brief Default constructor for Board.
     */
    Board();

    /**
     * @brief Constructor with parameters for Board.
     * @param width The width of the Board.
     * @param height The height of the Board.
     */
    Board(int width, int height);

    /**
     * @brief Copy constructor for Board.
     * @param other The Board object to be copied.
     */
    Board(const Board &other);

    /**
     * @brief Copy assignment operator for Board.
     * @param other The Board object to be assigned.
     * @return A reference to the assigned Board.
     */
    Board &operator=(const Board &other);

    /**
     * @brief Getter function to retrieve the width of the Board.
     * @return The width of the Board.
     */
    int GetWidth() const;

    /**
     * @brief Getter function to retrieve the height of the Board.
     * @return The height of the Board.
     */
    int GetHeight() const;

    /**
     * @brief Comparison operator for Board.
     * @param other The Board object to be compared.
     * @return True if the Boards are equal, false otherwise.
     */
    bool operator==(const Board &other) const;

    /**
     * @brief Input operator for Board.
     * @param is The input stream.
     * @param board The Board object to be read.
     * @return The input stream after reading the Board.
     */
    friend std::istream &operator>>(std::istream &is, Board &board);

    /**
     * @brief Output operator for Board.
     * @param os The output stream.
     * @param board The Board object to be written.
     * @return The output stream after writing the Board.
     */
    friend std::ostream &operator<<(std::ostream &os, const Board &board);
};
