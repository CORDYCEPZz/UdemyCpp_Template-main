#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm> // beinhaltet copy funktion

int main()
{
    const auto my_vector = std::vector{0, 1, 2, 3, 4, 5};
    auto my_result = std::vector<int>{};
    auto my_result2 = std::list<int>{};


    //  container must have   "insert"-Method implemented
    std::copy(my_vector.begin(),
              my_vector.end(),
              std::inserter(my_result,
              my_result.end()));

    for(const  auto &val: my_result)
    {
        std::cout << val << " ";
    }
    std::cout << "\n";
    my_result.clear();

    //  container must have   "push_back"-Method implemented
    std::copy(my_vector.begin(),
              my_vector.end(),
              std::back_inserter(my_result));

    for(const  auto &val: my_result)
    {
        std::cout << val << " ";
    }
    std::cout << "\n";
    my_result.clear();


    //  container must have   "push_front"-Method implemented
    std::copy(my_vector.begin(),
              my_vector.end(),
              std::front_inserter(my_result2));

    for(const  auto &val: my_result2)
    {
        std::cout << val << " ";
    }
    std::cout << "\n";
    my_result.clear();


    return 0;
}
