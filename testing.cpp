#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    unsigned int LEN_X = 5;
    unsigned int LEN_Y = 5;
    auto game_state = std::vector<std::string>(LEN_Y, std::string(LEN_X, static_cast<int>('_')));
    for( const auto & cal :game_state)
    {
        std::cout << cal << "\n";
    }



    return 0;
}
