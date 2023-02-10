#include <iostream>
// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

int main()
{
    float side_length_of_square;
    std::cout << "Please enter the side length of a square: "<< std::endl;
    std::cin >> side_length_of_square;

    float perimeter = 4.0*side_length_of_square;
    float area = side_length_of_square*side_length_of_square;
    std::cout << "The Area of the Square is equal to: " << area << std::endl;
    std::cout << "The Perimeter of the Square is equal to:  "<< perimeter << std::endl;

    return 0;
}
