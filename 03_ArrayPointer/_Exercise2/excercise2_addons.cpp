#include <iostream>
#include <cstdint>

void print_array(int* &input_array, std::size_t length)
{
    std::cout << "[" ;
    for(std::size_t i=0; i<length; i++)
        {
            if (i != length-1)
            {
                std::cout << input_array[i] << ", ";
            }
        }
    std::cout << input_array[length-1] << "]" << "\n\n";
}

void push_back(int* &input_array, const std::size_t size, const int value)
{
    // std::cout << "Pointer Anfang von input: "<< &input_array << std::endl;
    // std::cout << "Pointer Ende von input: "<< input_array << "\n" <<std::endl;
    auto *new_arr = new int[size+1];
    for(std::size_t i=0; i<size; i++)
    {
        new_arr[i] = input_array[i];
    }
    new_arr[size] = value;
    // std::cout << "Pointer Anfang vom Output: " << &new_arr << std::endl;
    // std::cout << "Pointer Ende von Output: "<< new_arr << "\n" <<std::endl;
    input_array = new_arr; // die line ändert die Spitze des pointers auf den die werte neuen arrays ändert aber nicht en anfang//
    delete[] new_arr; // am Ende den Speicher wieder Frei machen
    new_arr = nullptr;
}

void pop_back(int* &input_array, const std::size_t size)
{
    auto *new_arr = new int[size-1];
    for(std::size_t i = 0; i<size-1; i++)
    {
        new_arr[i] = input_array[i];
    }

    input_array = new_arr;
    delete[] new_arr;
    new_arr = nullptr;
}



int main()
{
    // Hier alles zum testen definieren
    std::size_t length = 3;
    auto *p_arr = new int[length]{}; // Speicher reservieren und mit nullen füllen

    std::cout << "Before: " << std::endl;
    print_array(p_arr, length);

    push_back(p_arr, length, 17);
    std::cout << "After: " << std::endl;
    print_array(p_arr, length+1);

    pop_back(p_arr, length);
    std::cout << "After: " << std::endl;
    print_array(p_arr, length);

    return 0;
}
