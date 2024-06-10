#include <iostream>
#include <vector>
#include "pointerandref.h"

int sum(const std::vector<int>& args) {
  int  sum_value = 0;
  for (auto arg : args) { // Iterate over remaining arguments (variadic pack)
    sum_value += arg;
  }
  return sum_value;
}

int main()
{
    int n = 2;
    int *a = &n;
    std::cout << "ref0: " << &n << std::endl;
    std::cout << "ref0: " << a << std::endl;
    funWithPointerArg(a);
    int* r =funWithRefArg(*a);
    (*r)++;
    
    std::cout << "return: " << *r << std::endl;
    std::cout << "returnRef: " << r << std::endl;

    std::cout << "Value: " << n << std::endl;
    std::cout << "Value: " << *a << std::endl;


    std::vector<int> data = {1, 2, 3, 4, 5};
    int result = sum(data);
    std::cout << "Sum: " << result << std::endl;
     return 0;
};