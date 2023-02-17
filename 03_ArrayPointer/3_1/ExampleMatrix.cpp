#include <iostream>
#include <cstdint>

//  Compute the summ for every column
int main()
{
    constexpr static auto num_rows = std::uint32_t{3};
    constexpr static auto num_cols = std::uint32_t{2};
    std::uint32_t sum_cols[num_cols]{};

    std::uint32_t my_matrix[num_rows][num_cols]  = {
        {1,2},
        {3,4},
        {5,6}
    };

    for( std::uint32_t i = 0; i<num_rows; i++)
    {
        for(std::uint32_t j = 0; j<num_cols; j++)
        {
            sum_cols[j] += my_matrix[i][j];
        }
    }
    
    std::cout << sum_cols[0] << std::endl;
    std::cout << sum_cols[1] << std::endl;
    return 0;
}
