#pragma once

#include "apple.h"
#include "direction.h"
#include "point.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Snake {
    std::vector<Point> _segments;
    int _nr_segments;
    std::string _name;

public:
    // Конструкторы
    Snake();  // Конструктор по умолчанию
    Snake(const Point &_position, const std::string &name);  // Конструктор с параметрами
    Snake(const Snake &other);  // Конструктор копирования
    Snake &operator=(const Snake &other);  // Оператор присваивания

    // Деструктор
    ~Snake();

    // Методы класса
    void Move(Direction direction);  // Метод для перемещения змеи
    int GetSize() const;  // Метод для получения размера змеи
    Point GetHeadPosition() const;  // Метод для получения позиции головы змеи
    void Eat(const Apple &apple);  // Метод для поедания яблока

    // Дополнительные функции, использующие алгоритмы STL
    bool ContainsPosition(const Point &position) const;  // Метод для проверки наличия позиции в змее
    void SortSegments();  // Метод для сортировки сегментов змеи
    void CopyFrom(const Snake &other);  // Метод для копирования из другой змеи
    bool operator<(const Snake &other) const;  // Оператор сравнения для змей

    // Оператор ввода
    friend std::istream &operator>>(std::istream &is, Snake &snake);

    // Оператор вывода
    friend std::ostream &operator<<(std::ostream &os, const Snake &snake);
};
