#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

bool sort_descedning(const double i, const double j)
{
    return i > j;
}

bool sort_ascedning(const double i, const double j)
{
    return i < j;
}

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    VectorT return_vector(matrix.size(), 0);
    if (!matrix.size() || !matrix[0].size())
    {
        return return_vector;
    }
        // erst allel isten ordnen absteigend
    //  copy in loop weil sonst würde matrix geändert werden
    for(size_t i = 0; auto row: matrix)
    {
        std::sort(row.begin(), row.end(), sort_descedning);
        return_vector[i] = row[0];
        i++;
    }
    return return_vector;
}

// Exercise 3
ValueT sort_and_max(VectorT &vec)
//  sortiere vec aufsteigend und gebe maximum zurück
{
    if (!vec.size())
    {
        return 0;
    }
    std::sort(vec.begin(), vec.end(), sort_ascedning);
    return vec.back();
}
