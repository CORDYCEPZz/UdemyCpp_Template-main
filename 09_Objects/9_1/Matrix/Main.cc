#include <iostream>

#include "Matrix.h"

int main()
{
    auto my_matrix = Matrix{1,2,3,4};
    my_matrix.print_matrix();

    return 0;
}
