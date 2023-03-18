#include <iostream>
#include <random>
#include <vector>
#include <cstdint>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <execution>

constexpr static auto NUM_ELEMENTS = 3;

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

void print(std::vector<std::int32_t> input_vec)
{
    std::cout << "[";
    for(auto it = input_vec.begin(); it != input_vec.end()-1; ++it)
    {
        std::cout << *it << ", ";
    }
    std::cout << input_vec[input_vec.size()-1] << "]\n";
}
std::int32_t randint()
{
    static auto seed = std::random_device{};
    static auto generator = std::mt19937{seed()};
    static auto dist =std::uniform_int_distribution<std::int32_t>{-10, 10}; // range -10 bis 10
    return dist(generator);
}

std::int32_t func1(const std::int32_t value1, const std::int32_t value2)
{
    return value1 * value2;
}






int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), randint);
    print(my_vector);

    //  Sequenzielle Berechnung der Summe
    const auto sum2 = std::accumulate(my_vector.begin(), my_vector.end(), 0);
    std::cout << "Sum: "<< sum2 << "\n";
    //  Ergebnis ist das es nicht so viel schneller ist ! das lohnt sich nzr bei lächerlichfielen ddaten


    // Nicht summation sondern
    auto prod = std::accumulate(my_vector.begin(), my_vector.end(), 1,func1);
    std::cout << "product: "<< prod << "\n";


    return 0;
}
