#include <iostream>
#include <vector>

void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << "\n" << std::endl;
}



int main()
{
    //  initialisiere vektor mit capacity 10
    std::vector<int>my_vector(10, 0);

    // zeigt capacity und size ist 10
    print_vector_info(my_vector);

    // 3 pushbacks also wird der speicher auf 13 festgelegt
    my_vector.reserve(13);
    my_vector.push_back(1);
    my_vector.push_back(2);
    my_vector.push_back(3);
    print_vector_info(my_vector);

    // fügt man einen neuen wert hinzu ist die size 14 und die capacity 26 -> deutlich zu viel
    my_vector.push_back(4);
    print_vector_info(my_vector);

    //  mit shrink to fit passt man die capccity an !
    my_vector.shrink_to_fit();
    print_vector_info(my_vector);

    //  clear die eintröge aber capacity bleitb erhalten (14)
    my_vector.clear();
    print_vector_info(my_vector);



    return 0;
}
