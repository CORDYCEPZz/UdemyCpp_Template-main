#include <cstdint>
#include <iostream>
#include <map>
#include <string>
#include <tuple>
#include <utility>

#include "exercise.h"

int main()
{
    // Exercise 1
    auto friends = Friends{};
    friends["Iza"] = std::pair{24, 47};
    friends["Moritz"] = std::pair{23, 78};
    friends["Ronja"] = std::pair{21, 55};
    friends["Peter"] = std::pair{23, 74};

    // Exercise 2
    const auto oldest_friend = get_oldest_friend(friends);
    const auto heaviest_friend = get_heaviest_friend(friends);

    std::cout << "My oldest friend: " << oldest_friend << '\n';
    std::cout << "My heaviest friend: " << heaviest_friend << '\n';

    return 0;
}
