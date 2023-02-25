#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"

double sum(const DynamicArray &dyn_arr)
{
    double sum = 0.0;
    for(std::size_t i=0; i<dyn_arr.m_length; i++)
    {
        sum += dyn_arr.m_data[i];
    }
    return sum;
}

double mean(const DynamicArray &dyn_arr)
{
    return sum(dyn_arr)/(static_cast<double>(dyn_arr.m_length));
}

double median(const DynamicArray &dyn_arr)
{
    size_t index;
    if((dyn_arr.m_length % 2)==0)
    {
        index = dyn_arr.m_length/2;
        return (dyn_arr.m_data[index] +dyn_arr.m_data[index+1]) /2;
    }
    index = dyn_arr.m_length/2;
    return dyn_arr.m_data[index];
}
