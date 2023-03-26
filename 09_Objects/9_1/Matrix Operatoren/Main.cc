#include <iostream>

#include "Matrix.h"

int main()
{
    auto my_matrix = Matrix<int>{1,2,3,4};
    my_matrix.print_matrix();

    auto my_matrix2 = Matrix<int>{1,2,3,4};
    my_matrix2.print_matrix();

    auto my_matrix3 = my_matrix + my_matrix2;
    my_matrix3.print_matrix();

    auto my_matrix4 = my_matrix - my_matrix2;
    my_matrix4.print_matrix();

    my_matrix += my_matrix3;
    my_matrix.print_matrix();

    my_matrix -= my_matrix3;
    my_matrix.print_matrix();



    return 0;
}
