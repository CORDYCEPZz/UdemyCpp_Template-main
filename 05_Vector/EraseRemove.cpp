#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int> &my_vector)
{
    std::cout << "[";
    for(std::size_t i=0; i<my_vector.size()-1; i++)
    {
        std::cout << my_vector[i] << ", ";
    }
    std::cout << my_vector[my_vector.size()-1] << "]" << std::endl;
}

void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << "\n" << std::endl;
}

bool sort_ascending(const int i, const int j)
{
    return i < j;
}

bool sort_descending(const int i, const int j)
{
    return i > j;
}

bool is_negativ(const int i)
{
   return i <0;
}

int main()
{
    auto my_vector = std::vector<int>{-1, 20, -33, 14, 35};
    print_vector(my_vector);
    print_vector_info(my_vector);

    auto remove_it = std::remove(my_vector.begin(), my_vector.end(), -1);
    my_vector.erase(remove_it, my_vector.end());
    print_vector(my_vector);

    auto remove_if = std::remove_if(my_vector.begin(), my_vector.end(), is_negativ);
    my_vector.erase(remove_if, my_vector.end());
    print_vector(my_vector);



    return 0;
}
