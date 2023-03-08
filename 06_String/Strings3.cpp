#include <iostream>
#include <string>



int main()
{
    // 1. appending values / concatenating
    const auto text = std::string{"Eins, Zwei, Drei"};
    auto  text_copy = text; // erlegt eien copy !keine Referenz! des strings
    std::cout << "string: " << text_copy << "\n";
    text_copy.clear();
    std::cout << "string: " << text_copy << "\n";

    auto text3 = text + ", Vier";
    std::cout << "string: " << text3 << "\n";

    auto text4 = text3;
    text4.append(", Fuenf");
    std::cout << "string: " << text4 << "\n";

    // 2. Equality tests
    auto s1 = std::string{"Janni"};
    auto s2 = std::string{"Jan"};
    std::cout << "s1 == s2 is " << std::boolalpha << (s1==s2) << "\n";

    const auto compared = s1.compare(s2); // nutzt man eigentlich nie
    std::cout << "Difference of positions of chars in Ascii table: " << compared << "\n";

    // 3. replace string
    const auto search_str = "nn";
    const auto index = s1.find(search_str);
    if(index != std::string::npos)
    {
        s1.replace(index, 2, "n");
    }
    else
    {
        std::cout << "The substring " << search_str << " is not in the string!\n";
    }
    std::cout << "Updated String: " << s1 <<  "\n";

    auto hello_world = std::string{"Hello my World"};
    auto left_index = hello_world.find("m");
    auto right_index = hello_world.find("d");
    const auto sub_str = hello_world.substr(left_index, right_index);
    std::cout << sub_str << "\n";



    return 0;
}
