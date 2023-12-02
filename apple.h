#pragma once

#include "point.h"

class Apple {
   Point _position;
public:
   Apple();
   Apple(const Point& position);
   Point GetPosition() const;
};