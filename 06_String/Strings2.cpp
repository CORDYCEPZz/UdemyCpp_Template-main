#include <iostream>
#include <string>


void print_found_index(const std::size_t idx, const std::string &func)
{
    std::cout << "Function: " << func << "\n";
    if(idx!=std::string::npos)
    {
        std::cout<< "Found at index: " << idx << "\n\n";
    }
    else
    {
        std::cout << "Substring not found !\n";
    }
}

int main()
{
    const auto text = std::string{"Eins, Zwei, Drei"};

    const auto seard_str1 = "i";
    const auto idx1 = text.find(seard_str1);
    print_found_index(idx1, "find");

    const auto seard_str12 = "i";
    const auto idx12 = text.find(seard_str12,5);
    print_found_index(idx12, "find after index");

    const auto seard_str2 = "i";
    const auto idx2 = text.rfind(seard_str2);
    print_found_index(idx2, "rfind");

    const auto seard_str3 = "ZD";
    const auto idx3 = text.find_first_of(seard_str3);
    print_found_index(idx3, "find_first_of");

    const auto seard_str4 = "ZD";
    const auto idx4 = text.find_last_of(seard_str4);
    print_found_index(idx4, "find_last_of");



    return 0;
}
