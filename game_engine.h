#pragma once
#include "apple.h"
#include "snake.h"
#include "board.h"

class GameEngine {
   Apple _apple;
   Snake _snake;
   Board _board;
public:
   GameEngine();
   void Init();
   void Run();
};