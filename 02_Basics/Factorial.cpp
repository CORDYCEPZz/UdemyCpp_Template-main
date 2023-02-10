#include <iostream>

unsigned int faculty(unsigned int x)
{
    if (x > 1)
    {
        return x * faculty(x-1);
    }
    else if (x==0)
    {
        return 1;
    }
    return x;

}
int main()
{
    unsigned int n = 5;
    unsigned int m = 0;
    unsigned int n_fac = faculty(n);
    unsigned int m_fac = faculty(m);
    std::cout << "The faculty of " << n << " is " << n_fac << std::endl;
    std::cout << "The faculty of " << m << " is " << m_fac << std::endl;
    return 0;
}
