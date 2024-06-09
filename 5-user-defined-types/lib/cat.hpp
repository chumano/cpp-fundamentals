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
    void sayHello() const; // const mean: this func not change member vars
    std::string name;
    int GetAge() const {return 1;}
};

#endif