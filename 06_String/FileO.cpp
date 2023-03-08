#include <iostream>
#include <fstream>
#include <string>

int main()
{
    auto str = std::string{};
    auto text = std::string{};


    /*********/
    /*  Read */
    /*********/
    auto input_file = std::ifstream{};
    input_file.open("TextInput.txt");

    // prüft ob das file geöffnet wurden kann
    if(input_file.is_open())
    {
        while (std::getline(input_file, str)) // speichert den zeileninhalt in str
        {
            text += str + "\n"; // fügt den inhaölt mit zeilenumbruch in den string der es speicher ein
        }
    }
    input_file.close();
    std::cout << text << "\n";

    /**********/
    /*  Write */
    /**********/
    //  testet ob ein substring in dem file steht und ersetzt ihn !
    const auto search_str = std::string({"eins"});
    const auto replace_str = std::string({"ICHI"});
    const auto idx = text.find(search_str);
    if(idx!=std::string::npos)
    {
        text.replace(idx, search_str.size(), replace_str);
    }
    std::cout << text << "\n";

    //  intialisiere outputfile
    auto ouput_file = std::ofstream{};
    ouput_file.open("TextOutput2.txt");

    if(ouput_file.is_open())
    {
        ouput_file << text;
    }

    ouput_file.close();



    return 0;
}
