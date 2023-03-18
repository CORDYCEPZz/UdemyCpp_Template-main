#include <iostream>
#include <random>
#include <vector>
#include <cstdint>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <execution>
constexpr static auto NUM_ELEMENTS = 10'000'000U;

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

    //  Parallele Berechnung
    const auto start = ClockType::now();
    const auto sum1 = std::reduce(std::execution::par ,my_vector.begin(), my_vector.end(), 0);
    const auto end = ClockType::now();
    std::cout << sum1 << "->" << std::chrono::duration_cast<ClockRes>(end-start).count()<<"\n";

    //  Sequenzielle Berechnung
    const auto start2 = ClockType::now();
    const auto sum2 = std::reduce(std::execution::seq ,my_vector.begin(), my_vector.end(), 0);
    const auto end2 = ClockType::now();
    std::cout << sum2 << "->" << std::chrono::duration_cast<ClockRes>(end2-start2).count()<<"\n";
    //  Ergebnis ist das es nicht so viel schneller ist ! das lohnt sich nzr bei lächerlichfielen ddaten


    // Nicht summation sondern
    auto prod = std::reduce(std::execution::par, my_vector.begin(), my_vector.end(), 1,func1);
    std::cout << "product: "<< prod << "\n";


    return 0;
}
