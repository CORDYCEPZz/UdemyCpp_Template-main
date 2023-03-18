#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

void print_vector(const std::vector<int> &vec)
{
    std::cout << "[";
    for(std::size_t i=0; i<vec.size()-1; i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << vec[vec.size()-1] << "]\n";
}

bool check_even(const int value)
{
    return value%2 == 0 ;
}


int main()
{
    auto my_vector = std::vector<int>(10, 0);
    print_vector(my_vector);
    std::iota(my_vector.begin(), my_vector.end(), 0);
    print_vector(my_vector);

    //  Transform ohne lambda function
    auto my_result1 = std::vector<int>(10,0);
    print_vector(my_result1);
    std::transform(my_vector.begin(), my_vector.end(), my_result1.begin(), check_even);
    print_vector(my_result1);

    //  Transform mit lambda function
    auto my_result2 = std::vector<int>(10,0);
    print_vector(my_result2);
    std::transform(my_vector.begin(), my_vector.end(), my_result2.begin(), [](const int value) { return(value%2)==0; });
    print_vector(my_result2);

    //  Copy If -> kopiert wert wenn lambda true returned
    auto my_result3 = std::vector<int>{};
    //  hier nicht my_result3.begin() sondern backinsertor weil es leer ist !
    std::copy_if(my_vector.begin(), my_vector.end(), std::back_insert_iterator(my_result3), [](const auto value) {return(value%2)==0;} );
    print_vector(my_result3);

    //  Test mit lambdafunction in variable
    auto filter_even = [](const auto value) {return(value%2)==0;} ;

    auto my_result4 = std::vector<int>{};
    //  hier nicht my_result3.begin() sondern backinsertor weil es leer ist !
    std::copy_if(my_vector.begin(), my_vector.end(), std::back_insert_iterator(my_result4), filter_even );
    print_vector(my_result4);


    return 0;
}
