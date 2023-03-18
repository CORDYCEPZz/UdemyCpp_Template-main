#include <iostream>
#include <random>
#include <vector>
#include <cstdint>
#include <chrono>
#include <algorithm>

void print(std::vector<std::int32_t> input_vec)
{
    std::cout << "[";
    for(auto it = input_vec.begin(); it != input_vec.end()-1; ++it)
    {
        std::cout << *it << ", ";
    }
    std::cout << input_vec[input_vec.size()-1] << "]\n";
}


constexpr static auto NUM_ELEMENTS = 10U;

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::milliseconds;

std::int32_t randint()
{
    static auto seed = std::random_device{};
    static auto generator = std::mt19937{seed()};
    static auto dist =std::uniform_int_distribution<std::int32_t>{-10, 10}; // range -10 bis 10
    return dist(generator);
}

bool func1(const std::int32_t value)
{
    return value < 0;
}

struct  Data
{
    int x;
    int y;
};

bool comp(const Data &i, const Data &j)
{
    return (i.x < j.x) && (i.y < j.y);
}

int main()
{
    // Min und Max mit Integern
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), randint);
    print(my_vector);
    const auto min = std::min_element(my_vector.begin(), my_vector.end());
    const auto max = std::max_element(my_vector.begin(), my_vector.end());
    std::cout << "Min: " << *min << " Max: " << *max << "\n";

    // Min und Max mit einer Struct und definierten funktion
    auto my_vector2 = std::vector<Data>{Data{1,1}, Data{2,2}};
    const auto min2 = std::min_element(my_vector2.begin(), my_vector2.end(), comp);
    const auto max2 = std::max_element(my_vector2.begin(), my_vector2.end(), comp);
    std::cout << "Min: " << (*min2).x << " Max: " << (*max2).x << "\n";

    // Equal function
    auto my_vector_copy = my_vector;
    const auto eq = std::equal(my_vector.begin(), my_vector.end(), my_vector_copy.begin());
    std::cout << "vector 1 == vector 2 : " << std::boolalpha << eq;


    return 0;
}
