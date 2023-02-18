#include <iostream>

void print_int_pointer(int* p)
{
    std::cout << "Deref: " << *p << "  Ref: " << p << "  Pointer adress; " << &p << std::endl;
}

void print_double_pointer(double* p)
{
    std::cout << "Deref: " << *p << "  Ref: " << p << "  Pointer adress; " << &p << std::endl;
}

int main()
{

    int a = 1337;
    double b = -13.37;

    int *c = &a;
    print_int_pointer(c);

    *c -= 10;
    print_int_pointer(c);

    int *d = &a;
    print_int_pointer(c);

    *c += 10;
    print_int_pointer(d);

    *c = b; // Das Problem wird hier schon angekündigt vom Editor
    print_int_pointer(c); // Hier sieht man ein Problem Pointer testen nicht ob das mit den werten klappt ! und so wierd der .37 teil abgeschnitten


    return 0;
}
