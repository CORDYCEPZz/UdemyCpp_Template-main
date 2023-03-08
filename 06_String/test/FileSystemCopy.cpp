#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;


int main()
{
    fs::path current_path = fs::current_path();
    fs::path current_file_path = fs::current_path();
    current_file_path /= "FileSystem2.cpp";

    for(auto it = fs::directory_iterator(current_path); it!= fs::directory_iterator{}; it++)
    {
        std::cout << *it << std::endl;
    }

    fs::path new_directory_path;
    new_directory_path /= fs::current_path();
    new_directory_path /= "test";

    if(!fs::exists(new_directory_path)) // wenn der pfad nicht existiert dann wird ein element hinzugefügt
    {
        fs::create_directory(new_directory_path);
    }

    fs::path new_file_path;
    new_file_path /= new_directory_path;
    new_file_path /= "FileSystemCopy.cpp";

    if(!fs::exists(new_file_path))
    {
        fs::copy_file(current_file_path, new_file_path);
    }



    return 0;
}
