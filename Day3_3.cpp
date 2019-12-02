#include <iostream>

void dot(int* v,int* u,int n)
{
    int i,sum;
    for(i=0;i<=n-1;i++)
    {
        sum=sum+v[i]*u[i];
    }
       
    
    for(i=0;i<=n-1;i++)
    {
            v[i]=sum;
    }
    
return ;
}
int main()
{
    int n,i;
    
    std::cin >> n;
    int v[n],u[n];
    for(i=0;i<=n-1;i++)
    {
        std::cin >> v[i];
    }
    for(i=0;i<=n-1;i++)
    {
        std::cin >> u[i];
    }
    dot(v,u,n);
    for(i=0;i<=n-1;i++)
    {
        std::cout << v[i] << std::endl;
    }
return 0;
}