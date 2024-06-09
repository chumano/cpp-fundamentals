#include <iostream>
#include "mylib.h"

int main()
{
    int n = 2;
    int *a = &n;
    std::cout << "ref0: " << &n << std::endl;
    std::cout << "ref0: " << a << std::endl;
    funWithPointerArg(a);
    funWithRefArg(*a);

    std::cout << "Value: " << n << std::endl;
    std::cout << "Value: " << *a << std::endl;
     return 0;
};