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
    int i,n;
    std::cin >> n;
    for(i=2;i<n;i++)
        {std::cout << 1.0*fibonachi(i)/fibonachi(i-1) <<std::endl;}
    return 0;
}