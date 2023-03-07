#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <algorithm>

using ValueT = double;
using VectorT = std::vector<ValueT>;
using MatrixT = std::vector<VectorT>;

void printVector(const VectorT &vec)
{
    for (std::size_t i = 0; i != vec.size(); ++i)
    {
        std::cout << "v[" << i << "] = " << vec[i] << '\n';
    }
    std::cout << "\n\n";
}

void printMatrix(const MatrixT &matrix)
{
    for (std::size_t i = 0; i != matrix.size(); ++i)
    {
        for (std::size_t j = 0; j != matrix[i].size(); ++j)
        {
            std::cout << "m[" << i << ", " << j << "] = " << matrix[i][j]
                      << '\n';
        }
    }
    std::cout << '\n';
}

bool sort_descedning(const double i, const double j)
{
    return i > j;
}

bool sort_ascedning(const double i, const double j)
{
    return i < j;
}

VectorT max_row_values(MatrixT &matrix)
{
    VectorT return_vector(matrix.size(), 0);
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

ValueT sort_and_max(VectorT &vec)
//  sortiere vec aufsteigend und gebe maximum zurück
{
    std::sort(vec.begin(), vec.end(), sort_ascedning);
    return vec[vec.size()-1];
}

int main()
{
    MatrixT matrix(3, VectorT(3, 0));
    for(int i=0; auto &row: matrix)
    {
        for(int j=0; auto &col: row)
        {
            row[j] = i+j;
            j++;
        }
        i++;
    }
    auto maxs = max_row_values(matrix);
    printVector(maxs);
    auto max_of_all = sort_and_max(maxs);
    printVector(maxs);
    std::cout << "maximum of all: " << max_of_all << "\n";

    return 0;
}
