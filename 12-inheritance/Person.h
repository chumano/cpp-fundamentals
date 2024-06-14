#pragma once
#include <string>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(string name);
    virtual ~Person(); //To Derived Class Deconstrucor call

    string GetName();

    virtual string VGetName();
    virtual int GetAge(){
        return 10;
    }
};


