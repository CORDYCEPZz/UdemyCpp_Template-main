#include <cmath>
#include <iostream>
#include <vector>


template <typename T>
void fill_vector(std::vector<T> &vec)
{
    for(int i= 0;auto &val: vec)
    {
        val = static_cast<T>(i);
        i++;
    }
}

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for(const auto &val: vec)
    {
        std::cout << val << " ";
    }
    std::cout<<std::endl;
}


int main()
{
    auto my_vector = std::vector<int>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    return 0;
}
