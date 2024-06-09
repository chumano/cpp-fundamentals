
#include <iostream>
#include "pointerandref.h"

int funWithPointerArg(int *a){
    std::cout << "Value1: " << *a <<std::endl;
    std::cout << "ref1: " << a <<std::endl;
    (*a)++;
    return 0;
}

int* funWithRefArg(int &a){
    std::cout << "Value2: " << a <<std::endl;
    std::cout << "Ref2: " << &a <<std::endl;
    a++;
    return &a;
}

int funWithRefConstArg(int const &a){
    std::cout << "Value3: " << a <<std::endl;
    std::cout << "Ref3: " << &a <<std::endl;
    //a++; //cant change
    return 0;
}