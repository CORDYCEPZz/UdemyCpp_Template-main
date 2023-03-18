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

    // replace_if
    const auto search_value = 2;
    const auto replace_value = 42;

    std::replace_if(my_vector.begin(), my_vector.end(), [=](auto value){return (value==search_value);} ,replace_value);
    print_vector(my_vector);

    //  sort
    auto sort = [](const auto l, const auto r){ return (l >  r); };
    std::sort(my_vector.begin(), my_vector.end(), sort);
    print_vector(my_vector);


    return 0;
}
