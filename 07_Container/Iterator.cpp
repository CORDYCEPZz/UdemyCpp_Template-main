#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    auto my_vector = std::vector{0, 1, 2, 3, 4, 5};

    // Iteratoren zun lesen und schreiben
    //  ForwardIterator
    auto it1 = my_vector.begin();
    auto it2 = my_vector.end();

    for( ;it1!=it2; ++it1)
    {
        std::cout << *it1 << "\n";
    }

    //  BidirectionalIterator
    auto it3 = my_vector.rbegin();
    auto it4 = my_vector.rend();

    for( ;it3!=it4; ++it3)
    {
        std::cout << *it3 << "\n";
    }


    // Iteratoren zun nur lesen  hier kann der compiler dann schneller sein
    //  constant ForwardIterator
    auto It1 = my_vector.cbegin();
    auto It2 = my_vector.cend();

    for( ;It1!=It2; ++It1)
    {
        std::cout << *It1 << "\n";
    }

    //  constant BidirectionalIterator
    auto It3 = my_vector.crbegin();
    auto It4 = my_vector.crend();

    for( ;It3!=It4; ++It3)
    {
        std::cout << *It3 << "\n";
    }


    return 0;
}
