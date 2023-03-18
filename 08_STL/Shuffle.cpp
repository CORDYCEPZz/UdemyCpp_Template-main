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



int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), randint);
    print(my_vector);

    auto seed = std::random_device{};
    auto generator = std::mt19937{seed()};
    std::shuffle(my_vector.begin(), my_vector.end(), generator);
    print(my_vector);



    return 0;
}
