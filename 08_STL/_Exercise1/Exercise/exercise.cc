#include <algorithm>
#include <chrono>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

#include "exercise.h"

// Exercise 2
std::vector<bool> shuffle_till_equal(const BinaryArray &target, BinaryArray input)
{
    static auto seed = std::random_device{};
    static auto generator = std::mt19937{seed()};

    std::uint32_t iteration = 1;
    while(!std::equal(target.begin(), target.end(), input.begin()))
    {
        std::shuffle(input.begin(), input.end(), generator);
        if(iteration % 250000 == 0)
        {
            std::cout << "Iteration: " << iteration << "\n";
        }
        ++iteration;
    }
    return input;
}

// Exercise 3
std::vector<bool> smart_shuffle_till_equal(const BinaryArray &target,
                                           BinaryArray input)
{
    static auto seed = std::random_device{};
    static auto generator = std::mt19937{seed()};

    auto it= input.begin();
    std::size_t i = 0; // nicht pro iteration speichern damit der test in for gespeichert bleibt

    while(!std::equal(target.begin(), target.end(), input.begin()))
    {
        for(; i<target.size(); i++)
        {
            if(*it != target[i])
            {
                break; //index und iterator  ab dem sich die werte unterscheiden ! diese bleiben erhalten !
            }
            it++;
        }
        std::shuffle(it, input.end(), generator);
    }
    return input;
}
