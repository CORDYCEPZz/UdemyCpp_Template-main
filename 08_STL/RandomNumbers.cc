#include <iostream>
#include <random>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <numeric>


constexpr static auto NUM_ELEMENTS = 1'000'000U;


int main()
{
    // Initalisiere Speicher
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);

    // generator (der Input heißt Seed und gibt die startbedingung bei der Zufallszahl an)
    auto seed = std::random_device{};
    auto generator = std::mt19937{seed()};

    // distribution
    auto dist =std::uniform_int_distribution<std::int32_t>{-10, 10}; // range -10 bis 10

    for(std::size_t i =0; i<my_vector.size(); ++i)
    {
        my_vector[i] = dist(generator);
    }

    for(std::size_t i =0; i<10; ++i)
    {
        std::cout << my_vector[i] << "\n";
    }

    return 0;
}
