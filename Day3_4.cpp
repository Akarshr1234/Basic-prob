#include <iostream>
#include <vector>

// void function(std::)
// {
//     vector

// }
int main()
{

    int i,j,n;
    std::cin >> n;
    std::vector<std::vector<int> > vect (n);
    for(i=0;i<n;i++)
    {
        (vect.at(i)).resize(n,0);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            std::cin >> vect.at(i).at(j);

        }
    }

    
   return 0;
}