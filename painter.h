#pragma once
#include "point.h"
#include <iostream>

/**
 * @file painter.h
 * @brief Definition of the Painter class.
 * @author Ecaterina Galatan
 * @date 2023
 * @project Snake Game Lab 05
 */

class Painter {
public:
    /**
     * @brief Default constructor for Painter.
     */
    Painter();

    /**
     * @brief Copy constructor for Painter.
     * @param other The Painter object to be copied.
     */
    Painter(const Painter &other);

    /**
     * @brief Copy assignment operator for Painter.
     * @param other The Painter object to be assigned.
     * @return A reference to the assigned Painter.
     */
    Painter &operator=(const Painter &other);

    /**
     * @brief Constructor with parameters for Painter.
     * @param topLeft The top-left corner of the image.
     * @param bottomRight The bottom-right corner of the image.
     * @param image The image data represented as a 2D array of characters.
     */
    Painter(const Point &topLeft, const Point &bottomRight, char **image);

    /**
     * @brief Destructor for Painter.
     */
    ~Painter();

    /**
     * @brief Draw an image on the canvas.
     * @param topLeft The top-left corner of the image.
     * @param bottomRight The bottom-right corner of the image.
     * @param image The image data represented as a 2D array of characters.
     */
    void DrawImage(Point topLeft, Point bottomRight, char **image);

    /**
     * @brief Write text on the canvas at a specified position.
     * @param position The position where the text will be written.
     * @param text The text to be written.
     */
    void WriteText(Point position, char *text);

    /**
     * @brief Comparison operator for Painter.
     * @param other The Painter object to be compared.
     * @return True if the Painters are equal, false otherwise.
     */
    bool operator==(const Painter &other) const;

    /**
     * @brief Input operator for Painter.
     * @param is The input stream.
     * @param painter The Painter object to be read.
     * @return The input stream after reading the Painter.
     */
    friend std::istream &operator>>(std::istream &is, Painter &painter);

    /**
     * @brief Output operator for Painter.
     * @param os The output stream.
     * @param painter The Painter object to be written.
     * @return The output stream after writing the Painter.
     */
    friend std::ostream &operator<<(std::ostream &os, const Painter &painter);
};
