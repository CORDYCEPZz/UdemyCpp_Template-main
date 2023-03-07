#include <cmath>
#include <iostream>
#include <vector>

void fill_vector(std::vector<double> &vec)
{
    for(int i= 0;auto &val: vec)
    {
        val = i;
        i++;
    }
}

void print_vector(const std::vector<double> &vec)
{
    for(const auto &val: vec)
    {
        std::cout << val << " ";
    }
    std::cout<<std::endl;
}

void exp_vector(std::vector<double> &vec)
{
    for(auto &val:vec)
    {
        val = std::exp(val);
    }
}

void log_vector(std::vector<double> &vec)
{
    for(auto &val: vec)
    {
        val = std::log(val);
    }
}

int main()
{
    auto my_vector = std::vector<double>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    exp_vector(my_vector);
    print_vector(my_vector);

    log_vector(my_vector);
    print_vector(my_vector);

    return 0;
}
