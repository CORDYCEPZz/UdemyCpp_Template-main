#include <iostream>

#include "Matrix.h"

int main()
{
    auto my_matrix = Matrix<int>{1,2,3,4};
    my_matrix.print_matrix();

    auto my_matrix2 = Matrix<double>{1.1, 2.2, 3.3, 4.4};
    my_matrix2.print_matrix();


    return 0;
}
