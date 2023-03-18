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
    return value > -5 && value < 5;
}



int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), randint);
    print(my_vector);

    auto check_1 = std::all_of(my_vector.begin(), my_vector.end(), func1);
    auto check_2 = std::any_of(my_vector.begin(), my_vector.end(), func1);
    auto check_3 = std::none_of(my_vector.begin(), my_vector.end(), func1);
    std::cout << "Check 1: " << std::boolalpha << check_1 << "\n";
    std::cout << "Check 2: " << std::boolalpha << check_2 << "\n";
    std::cout << "Check 3: " << std::boolalpha << check_3 << "\n";

    return 0;
}
