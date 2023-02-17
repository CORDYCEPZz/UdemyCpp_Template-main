#include <iostream>

int main()
{

    //  1d-Array (Vector)
    int my_array[3] = {1, 2, 3};

    // 2d-Array (3x2 Matrix)
    int my_matrix[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };


    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            std::cout << my_matrix[i][j] << std::endl;
        }
    }

    return 0;
}
