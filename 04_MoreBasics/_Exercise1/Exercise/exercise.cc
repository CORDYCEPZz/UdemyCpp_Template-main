#include <cstdint>
#include <iostream>

#include "exercise.h"

namespace computation
{
// Exercise 1
double mean_array_value(int *array, const std::size_t length)
{
    if(array == nullptr && length == 0)
    {
        return 0;
    }
    int sum = 0;
    int count =0;
    for(std::size_t i=0; i<length; i++)
    {
        sum+= *array;
        array++;
        count++;
    }
    return (double)sum/count;

}

double mean_array_value(double *array, const std::size_t length)
{
    if(array == nullptr && length == 0)
    {
        return 0;
    }
    double sum = 0;
    double count = 0;
    for(std::size_t i=0; i<length; i++)
    {
        sum+= *array;
        array++;
        count++;
    }
    return sum/count;
}


} // namespace computation
