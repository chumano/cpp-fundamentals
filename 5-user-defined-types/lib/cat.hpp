#include <string>

#ifndef CAT_H
#define CAT_H

int catCounter = 0;

class Cat
{
public:
    Cat();
    //Cat()=default;
    ~Cat();
    void sayHello();
    std::string name;
};

#endif