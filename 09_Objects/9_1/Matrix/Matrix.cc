#include <iostream>

#include "Matrix.h"



// print Matrix
void Matrix::print_matrix() const
{
    std::cout << A << " " << B << "\n";
    std::cout << C << " " << D << "\n";
}


//   getter Funktionen
double Matrix::get_A() const
{
    return A;
}

double Matrix::get_B() const
{
    return B;
}

double Matrix::get_C() const
{
    return C;
}

double Matrix::get_D() const
{
    return D;
}

// setter Funktionen
void Matrix::set_A(double input)
{
    A = input;
}

void Matrix::set_B(double input)
{
    B = input;
}

void Matrix::set_C(double input)
{
    C = input;
}

void Matrix::set_D(double input)
{
    D = input;
}
