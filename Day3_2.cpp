#include <iostream>
int main()
{
    int a;
    int* ptr;
    a=42;
    ptr=&a;
    std::cout << *ptr << std::endl;
    return 0;

}