#include <iostream>

#include "exercise.h"

// Exercise 2
std::string_view get_oldest_friend(const Friends &friends)
{
    if(friends.empty())
    {
        std::cout << "Empty Input\n";
        return std::string_view("");
    }

    auto age_max = std::pair<std::string ,std::int32_t>{"",0};
    for(const auto &[key, val]:friends)
    {
        if(age_max.second < val.first)
        {
            age_max.first = key;
            age_max.second = val.first;
        }
    }
    return std::string_view(age_max.first);
}

std::string_view get_heaviest_friend(const Friends &friends)
{
    if(friends.empty())
    {
        std::cout << "Empty Input\n";
        return std::string_view("");
    }

    auto weight_max = std::pair<std::string ,std::int32_t>{"",0};
    for(const auto &[key, val]:friends)
    {
        if(weight_max.second < val.second)
        {
            weight_max.first = key;
            weight_max.second = val.second;
        }
    }
    return std::string_view(weight_max.first);
}
