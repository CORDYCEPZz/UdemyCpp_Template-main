#include <cmath>
#include <iostream>
#include <vector>


// Exercise:
// 1.) Schreibe eine Function, die einen Vector mit aufsteigenden Werten befüllt
//     void fill_vector(std::vector<double> &vec)
// 2.) Schreibe eine Function, die die Werte eines Vectors ausgibt
//      void print_vector(const std::vector<double> &vec)
// 3.) Schreibe Funktionen, die die:
// - Exponential
// - Natural Logarithm
// Werte von einem double-Vector berechnet
//      void double_vector_exp(std::vector<double> &vec)
// verwendet std::exp, std::log aus <cmath>
// [exp(0.0), exp(1.0), ...]
// [log(0.0), log(1.0), ...]
void fill_vector(std::vector<double> &vec)
{
    for(std::size_t i=0; i<vec.size(); i++)
    {
        vec[i] = static_cast<double>(i);
    }
}

void print_vector(const std::vector<double> &vec)
{
    if (vec.size() !=0)
    {
        std::cout << "["<< vec[0] <<", ";
        for(std::size_t i=1; i<vec.size()-1; i++ )
        {
            std::cout << vec[i] << ", ";
        }
        std::cout << vec[vec.size()-1] << "]" << std::endl;
    }
}

void double_vector_exp(std::vector<double> &vec)
{
    if (vec.size() !=0)
    {
        for(std::size_t i=0; i<vec.size(); i++ )
        {
            vec[i] = std::exp(vec[i]);
        }
    }
}



void log_vector_exp(std::vector<double> &vec)
{
    if (vec.size() !=0)
    {
        for(std::size_t i=0; i<vec.size(); i++ )
        {
            vec[i] = std::log(vec[i]);
        }
    }
}




int main()
{
    auto my_vector = std::vector<double>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    double_vector_exp(my_vector);
    print_vector(my_vector);

    log_vector_exp(my_vector);
    print_vector(my_vector);

    return 0;
}
