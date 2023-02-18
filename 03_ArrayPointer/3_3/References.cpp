#include <iostream>

void f1(int v) // v kopiert den wert
{
    std::cout << "f1: " <<v << std::endl;
    std::cout << &v << std::endl;
}

void f2(int *v) // auch eine copy aber von dem pointer und um den wertz u bekommen muss man derefernzieren
                // -> kann auf den Nullpointr zeigen und das wäre schlecht
{
    std::cout << "f2: " << *v << std::endl;
    std::cout << v << std::endl;
}

void f3(int &v) // eine reference -> ist genau das gleiche wie die reference ! also KEINE COPY
                //  benötigt keine Dereferenzierung
{
    std::cout << "f3: " << v << std::endl;
    std::cout << &v << std::endl;
}







int main()
{
    int a = 2;
    std::cout << "The original storage of " << a << " is at: " << &a << std::endl;

    f1(a); // zeigt auf copy
    f2(&a); // zeigt auf a direkt aber ist unhandlich
    f3(a); // zeigt auf a und ist einfach zu nutzen

    return 0;
}
