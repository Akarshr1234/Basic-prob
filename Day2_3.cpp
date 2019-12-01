#include <iostream>

int main()
    {
        int i,n;
        float sum;
        std::cin >> n;
        i=1;
        sum=0;
        for(;i<=n;i++)
        {
            sum=sum+(1.0/i);
            std::cout << sum << std::endl;
        }
        return 0;
    }