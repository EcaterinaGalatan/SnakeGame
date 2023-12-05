#pragma once
#include <iostream>

/**
 * @file board.h
 * @brief Определение класса Board.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class Board {
    int _width; ///< Ширина доски.
    int _height; ///< Высота доски.

public:
    /**
     * @brief Конструктор по умолчанию для объекта Board.
     */
    Board();

    /**
     * @brief Конструктор с параметрами для объекта Board.
     * @param width Ширина доски.
     * @param height Высота доски.
     */
    Board(int width, int height);

    /**
     * @brief Конструктор копирования для объекта Board.
     * @param other Объект Board, который будет скопирован.
     */
    Board(const Board &other);

    /**
     * @brief Оператор присваивания копирования для объекта Board.
     * @param other Объект Board, который будет присвоен.
     * @return Ссылка на присвоенный объект Board.
     */
    Board &operator=(const Board &other);

    /**
     * @brief Функция-геттер для получения ширины доски.
     * @return Ширина доски.
     */
    int GetWidth() const;

    /**
     * @brief Функция-геттер для получения высоты доски.
     * @return Высота доски.
     */
    int GetHeight() const;

    /**
     * @brief Оператор сравнения для объекта Board.
     * @param other Объект Board, с которым происходит сравнение.
     * @return True, если доски равны, false в противном случае.
     */
    bool operator==(const Board &other) const;

    /**
     * @brief Оператор ввода для объекта Board.
     * @param is Поток ввода.
     * @param board Объект Board, который будет считан.
     * @return Поток ввода после считывания объекта Board.
     */
    friend std::istream &operator>>(std::istream &is, Board &board);

    /**
     * @brief Оператор вывода для объекта Board.
     * @param os Поток вывода.
     * @param board Объект Board, который будет записан.
     * @return Поток вывода после записи объекта Board.
     */
    friend std::ostream &operator<<(std::ostream &os, const Board &board);
};
