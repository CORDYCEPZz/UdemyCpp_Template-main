#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <string>
#include <string_view>
#include <utility>

using Friends = std::map<std::string, std::pair<std::int32_t, std::int32_t>>;
int main()
{
    Friends friends;
    friends["Iza"] = std::pair{24, 47};

    std::cout << friends["Iza"];


    return 0;
}
