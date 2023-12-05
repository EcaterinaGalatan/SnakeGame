#pragma once
#include "point.h"
#include <iostream>

/**
 * @file apple.h
 * @brief Определение класса Apple.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class Apple {
    Point _position; ///< Позиция яблока.

public:
    /**
     * @brief Конструктор по умолчанию для объекта Apple.
     */
    Apple();

    /**
     * @brief Конструктор с параметрами для объекта Apple.
     * @param position Позиция яблока.
     */
    Apple(const Point &position);

    /**
     * @brief Конструктор копирования для объекта Apple.
     * @param other Объект Apple, который будет скопирован.
     */
    Apple(const Apple &other);

    /**
     * @brief Оператор присваивания копирования для объекта Apple.
     * @param other Объект Apple, который будет присвоен.
     * @return Ссылка на присвоенный объект Apple.
     */
    Apple &operator=(const Apple &other);

    /**
     * @brief Оператор сравнения для объекта Apple.
     * @param other Объект Apple, с которым происходит сравнение.
     * @return True, если яблоки равны, false в противном случае.
     */
    bool operator==(const Apple &other) const;

    /**
     * @brief Оператор ввода для объекта Apple.
     * @param is Поток ввода.
     * @param apple Объект Apple, который будет считан.
     * @return Поток ввода после считывания объекта Apple.
     */
    friend std::istream &operator>>(std::istream &is, Apple &apple);

    /**
     * @brief Оператор вывода для объекта Apple.
     * @param os Поток вывода.
     * @param apple Объект Apple, который будет записан.
     * @return Поток вывода после записи объекта Apple.
     */
    friend std::ostream &operator<<(std::ostream &os, const Apple &apple);

    /**
     * @brief Функция-геттер для получения позиции яблока.
     * @return Позиция яблока.
     */
    Point GetPosition() const;
};
