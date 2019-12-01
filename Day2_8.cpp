#include <iostream>

int fibonachi(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return fibonachi(n-1)+fibonachi(n-2);
}

int main()
    {
        int n;
        std::cin >> n;
        std::cout << fibonachi(n) <<std::endl;
    return 0;
    }

    