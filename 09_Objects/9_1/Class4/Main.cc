  #include <iostream>

#include "Image.h"

int main()
{
    Image my_image1(10, 20);
    std::cout << "Height: " << my_image1.get_height() << "\n";
    std::cout << "Width: " << my_image1.get_width() << "\n";
    my_image1.set_pixel(0, 0, 255);
    my_image1.set_pixel(0, 1, 255);
    my_image1.set_pixel(0, 2, 255);
    my_image1.set_pixel(1, 0, 255);
    my_image1.set_pixel(1, 1, 255);
    my_image1.set_pixel(2, 1, 255);

    std::cout << "Matrix element at [0][0] " << (int)my_image1.get_matrix()[0][0]  << "\n";

    my_image1.save_image("image.bmp");

    return 0;
}
