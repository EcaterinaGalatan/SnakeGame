#include "direction.h"
#include <stdexcept>

/**
 * @file direction.cpp
 * @brief Реализация операторов для перечисления Direction.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

/**
 * @brief Оператор вывода для перечисления Direction.
 * @param os Поток вывода.
 * @param direction Значение Direction для записи.
 * @return Поток вывода после записи Direction.
 */
std::ostream &operator<<(std::ostream &os, const Direction &direction) {
    switch (direction) {
        case Direction::Top:
            os << "Вверх";
            break;
        case Direction::Left:
            os << "Влево";
            break;
        case Direction::Right:
            os << "Вправо";
            break;
        case Direction::Bottom:
            os << "Вниз";
            break;
        default:
            throw std::invalid_argument("Недопустимое направление");
    }
    return os;
}

/**
 * @brief Оператор ввода для перечисления Direction.
 * @param is Поток ввода.
 * @param direction Значение Direction для считывания.
 * @return Поток ввода после считывания Direction.
 */
std::istream &operator>>(std::istream &is, Direction &direction) {
    std::string input;
    is >> input;

    if (input == "Вверх") {
        direction = Direction::Top;
    } else if (input == "Влево") {
        direction = Direction::Left;
    } else if (input == "Вправо") {
        direction = Direction::Right;
    } else if (input == "Вниз") {
        direction = Direction::Bottom;
    } else {
        throw std::invalid_argument("Недопустимый ввод направления");
    }

    return is;
}
