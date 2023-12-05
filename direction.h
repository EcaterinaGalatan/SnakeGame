#pragma once
#include <iostream>

/**
 * @file direction.h
 * @brief Определение перечисления Direction и связанных с ним операторов.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

// Перечисление Direction с четырьмя значениями: Top, Left, Right, Bottom.
enum class Direction {
    Top,    ///< Направление вверх.
    Left,   ///< Направление влево.
    Right,  ///< Направление вправо.
    Bottom  ///< Направление вниз.
};

/**
 * @brief Оператор вывода для перечисления Direction.
 * @param os Поток вывода.
 * @param direction Значение Direction для записи.
 * @return Поток вывода после записи Direction.
 */
std::ostream &operator<<(std::ostream &os, const Direction &direction);

/**
 * @brief Оператор ввода для перечисления Direction.
 * @param is Поток ввода.
 * @param direction Значение Direction для считывания.
 * @return Поток ввода после считывания Direction.
 */
std::istream &operator>>(std::istream &is, Direction &direction);
