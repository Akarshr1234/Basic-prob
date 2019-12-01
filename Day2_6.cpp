#include <iostream>

int main()
{
    int n,i,j;
    std::cin >> n;
    int v1[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                std::cin >> v1[i][j];
            }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                std::cout << v1[i][j]*v1[i][j] <<std::endl;
            }
    }
return 0; 
}