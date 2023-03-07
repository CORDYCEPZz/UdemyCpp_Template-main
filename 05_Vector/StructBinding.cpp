#include <iostream>
#include <vector>


struct Data
{
    float x;
    float y;

};

int main()
{
    auto vec = std::vector<Data>{Data{1.0, 2.0}, Data{4.0, 6.0}};

    for(const auto &[x_, y_] : vec)
    {
        std::cout << x_ << " " << y_ << std::endl;
    }


    return 0;
}
