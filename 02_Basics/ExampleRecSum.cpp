# include <iostream>

unsigned int rec_sum(unsigned int x)
{
    if(x>0)
    {
        return x+rec_sum(x-1);
    }
    return x;
}




int main()
{
    unsigned int n = 100;
    unsigned int n_rec_sum = rec_sum(n);
    std::cout<<"The cursive summ of " << n << " is equal to " << n_rec_sum << std::endl;
    return 0;
}
