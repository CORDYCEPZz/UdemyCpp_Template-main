#include <iostream>
#include <map>
#include <cstdint>
#include <string>

int main()
{
    auto my_map = std::map<std::string, std::uint32_t>{};
    my_map["Jan"] = 28;
    my_map["Marvin"] = 23;
    my_map["Iza"] = 24;
    my_map["Albert"] = 71;

    //  Werte überschreiben
    my_map["Jan"] = 30;
    std::cout << "Jan's age: " << my_map["Jan"] << "\n";

    //  Werte printen mit first für den key und second für den value
    for(const auto &val: my_map)
    {
        std::cout << val.first << " -> "<< val.second << "\n";
    }

    //  key suchen
    // C++17
    auto search_str = "Jan";
    const auto search_it = my_map.find(search_str);
    bool found_key = search_it != my_map.end();

    // C++20
    bool found_key_2 = my_map.contains(search_str);

    std::cout << "C++17: " << std::boolalpha << found_key << "\n";
    std::cout << "C++20: " << std::boolalpha << found_key_2 << "\n";





    return 0;
}
