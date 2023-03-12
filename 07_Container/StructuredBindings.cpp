#include <iostream>
#include <map>
#include <string>
#include <tuple>

void get_data_old(int &a, std::string &b, double &c)
{
    a = 1337;
    b = "data";
    c = 1337.0;
}

// bevorzugte version wenn es nur um output geht!
std::tuple<int, std::string, double> get_data()
{
    return std::make_tuple(1337, "data", 1337.0);
}

int main()
{
    int a;
    std::string b;
    double c;

    get_data_old(a, b, c);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    const auto [id, name, score] = get_data(); // das ist das Structured Binding
    //  eigenständige variablen die den speicher der tupel wegnehmen
    std::cout << id << std::endl;
    std::cout << name << std::endl;
    std::cout << score << std::endl;
}
