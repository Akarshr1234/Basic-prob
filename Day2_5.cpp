#include <iostream>

int is_prime(int n)
{
    int i;
    int a=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a=0;
        }
    }
    return a;
}
int main()
    {
        int n=5;
        if(is_prime(n)==0){std::cout << "given number is composite" << std::endl;}
        else
        {
            std::cout << "given number is prime" << std::endl;
        }
return 0;
    
    }