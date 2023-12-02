#pragma once

#include "point.h"

class Painter {
public:
   void DrawImage(Point topLeft, Point bottomRight, char** image);
   void WriteText(Point position, char* text);
};