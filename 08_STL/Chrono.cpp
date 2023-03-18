#include <iostream>
#include <random>
#include <vector>
#include <cstdint>
#include <chrono>

constexpr static auto NUM_ELEMENTS = 1'000'000U;

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::milliseconds;

int main()
{
    // Initalisiere Speicher
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);

    // generator (der Input heißt Seed und gibt die startbedingung bei der Zufallszahl an)
    auto seed = std::random_device{};
    auto generator = std::mt19937{seed()};

    // distribution
    auto dist =std::uniform_int_distribution<std::int32_t>{-10, 10}; // range -10 bis 10

    const auto start_time = ClockType::now();
    for(std::size_t i =0; i<my_vector.size(); ++i)
    {
        my_vector[i] = dist(generator);
    }
    const auto end_time = ClockType::now();
    const auto eval_time = std::chrono::duration_cast<ClockRes>(end_time-start_time).count();

    std::cout << "Evaluation time: " << eval_time << "ms \n";

    for(std::size_t i =0; i<10; ++i)
    {
        std::cout << my_vector[i] << "\n";
    }

    return 0;
}
