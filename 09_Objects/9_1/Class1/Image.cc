#include <iostream>

#include "Image.h"


Image::Image(const std::uint32_t width, const std::uint32_t height)
{
    m_width = width; // Die Übergebenen werte speichern
    m_height = height; // die Sind dann aber private undn icht mehr accessable
    //  Das ist noch nicht die good member method also nicht wie man es machen sollte ! das lernen wir spter

    std::cout << "Image object created with shape " << width << "x" << height << "\n";
}


Image::~Image()
{
    std::cout << "Image object destroyed!\n";
}
