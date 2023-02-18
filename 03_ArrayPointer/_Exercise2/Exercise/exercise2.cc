#include <cstdint>
#include <iostream>

#include "exercise2.h"

//  Für details und comments schau in excercisee2_addons.cpp
// Exercise 1
void push_back(int* &input_array, const std::size_t size, const int value)
{
    auto *new_arr = new int[size+1];
    for(std::size_t i=0; i<size; i++)
    {
        new_arr[i] = input_array[i];
    }
    new_arr[size] = value;

    input_array = new_arr;
    delete[] new_arr;
    new_arr = nullptr;
}

// Exercise 2
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
