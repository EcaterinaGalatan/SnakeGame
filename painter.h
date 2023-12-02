#pragma once
#include "point.h"
#include <iostream>

class Painter {
public:
    // Constructors
    Painter();
    Painter(const Painter &other);
    Painter &operator=(const Painter &other);
    Painter(const Point &topLeft, const Point &bottomRight, char **image);
    
    // Destructor
    ~Painter();

    // Member functions
    void DrawImage(Point topLeft, Point bottomRight, char **image);
    void WriteText(Point position, char *text);

    // Comparison operator
    bool operator==(const Painter &other) const;

    // Input operator
    friend std::istream &operator>>(std::istream &is, Painter &painter);

    // Output operator
    friend std::ostream &operator<<(std::ostream &os, const Painter &painter);
};
