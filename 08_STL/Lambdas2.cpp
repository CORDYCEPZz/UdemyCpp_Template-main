#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

void print_vector(const std::vector<int> &vec)
{
    std::cout << "[";
    for(std::size_t i=0; i<vec.size()-1; i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << vec[vec.size()-1] << "]\n";
}



int main()
{
    auto my_vector = std::vector<int>(10, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);
    print_vector(my_vector);

    my_vector.erase(std::remove_if(my_vector.begin(), my_vector.end(), [](const auto val){return val>5;} ),
                     my_vector.end());

    print_vector(my_vector);



    return 0;
}
