
#include <iostream>
#include "cat.hpp"

Cat::Cat()
{
    this->name = "Cat" + std::to_string(++catCounter);
    std::cout << "Init " << this->name << "\n";
}

Cat::~Cat()
{
    std::cout << "Destroy " << this->name << "\n";
}

void Cat::sayHello(){
    std::cout << "Hello from " << this->name << "\n";
}