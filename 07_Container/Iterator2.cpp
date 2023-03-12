#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    auto my_vector = std::vector{0, 1, 2, 3, 4, 5};

    auto it = my_vector.begin();
    std::cout << *it << "\n";
    std::advance(it, 2) ; // it +=2;
    std::cout << *it << "\n";

    auto dist = std::distance(it, my_vector.end());
    // std::cout << "distance: " << dist << "\n";  von 2 bis ende sind es 4 werte

    auto prev = std::prev(it);
    std::cout << *prev << "\n";
    auto next = std::next(it);
    std::cout << *next << "\n";



    return 0;
}
