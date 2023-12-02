# Snake Game Lab Work

## Description

This project implements a Snake Game as part of a laboratory work for the C++ course. The Snake Game is a classic arcade game where the player controls a snake that moves around the screen, eats apples, and grows longer over time. The goal is to achieve the highest score possible without colliding with the snake's own body or the game borders.

## Project Dependencies

- C++ compiler (supporting C++11 or later)
- Make utility

## Game Rules

1. The game consists of a snake, represented by a series of connected segments, initially positioned on the game board.
2. The snake moves continuously in a specific direction (up, down, left, or right).
3. The player can change the snake's direction to navigate it around the game board.
4. Apples are randomly placed on the board, and the snake can eat them to grow longer.
5. The game ends if the snake collides with its own body or the game board borders.
6. The objective is to achieve the highest score by eating apples and growing the snake.

## Building the App

To build the Snake Game, follow these steps:

1. Open a terminal.
2. Navigate to the project directory.

   ```bash
   cd path/to/snake-game-lab-05

3. Run the following commands:
    ```bash 
    make clean
    make

The executable SnakeGame should be generated.

4. To clean up generated files, run:
    ```bash 
    make clean


## Files Description
point.h -> Представляет точку в двумерном пространстве с координатами x и y. Объекты типа Point содержат две целочисленные координаты, x и y.
apple.h -> Представляет яблоко на игровом поле. Объекты типа Apple содержат поле _position типа Point, которое определяет координаты яблока.
direction.h -> Перечисление, представляющее возможные направления движения. Объекты типа Direction могут принимать одно из четырех значений: Top, Left, Right, Bottom, представляя верх, лево, право и низ соответственно.
snake.h -> Представляет змею на игровом поле. Объекты типа Snake содержат массив _segments типа Point, представляющий сегменты тела змеи, а также переменную _nr_segments, обозначающую текущее количество сегментов. Методы класса позволяют двигать змею, получать ее размер, позицию и обрабатывать событие поедания яблока (Eat).
board.h -> Представляет игровое поле. Объекты типа Board содержат ширину (_width) и высоту (_height) игрового поля. Методы класса позволяют получать размеры поля.
game_engine.h -> Отвечает за игровой процесс, управляя змеей, яблоком и игровым полем. Объекты типа GameEngine содержат экземпляры классов Apple, Snake, и Board. Методы класса предназначены для инициализации игры (Init) и запуска ее основного цикла (Run). 
painter.h -> Предназначен для отрисовки изображений и текста в консоли. Класс Painter содержит методы для рисования изображений (DrawImage) и вывода текста (WriteText) в консоли. Метод DrawImage принимает координаты верхнего левого угла и нижнего правого угла, а также двумерный массив символов (char** image), который представляет изображение. Метод WriteText принимает координаты и строку текста для вывода.

