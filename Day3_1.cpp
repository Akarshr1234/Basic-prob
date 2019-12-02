#include <iostream>
 int main()
 {
     int i,j,n,index,max,temp;

    std::cin >> n;
    int arr[n];
     for(i=0;i<n;i++)
     {
         std::cin >> arr[i];
     }
     for(i=n-1;i>0;i--)
     {
         max=arr[0];
         index=0;
              for(j=0;j<=i;j++)
         {
             if(arr[j]>max)
             {
                 max=arr[j];
                 index = j;
            }
         }
         temp=arr[i];
         arr[i]=arr[index];
         arr[index]=temp;
     }
        for(int t=0;t<n;t++)
        {
         std::cout << arr[t] << std::endl;
        }
     
     
     return 0;

 }