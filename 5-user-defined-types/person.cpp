//a preprocessor directive that's designed 
//  to prevent a header file 
//  from being included multiple times within a single compilation unit
#pragma once 

#include <string>
#include <iostream>
#include "lib/cat.hpp"

//using namespace std;
using  std::string;
using  std::cout;
using  std::endl;

class Person
{

private:
    string firstName;
    string lastName;

public:
    Person()
    {
        this->cat = NULL;
    }
    Person(string fn, string ln) : Person()
    {
        this->firstName = fn;
        this->lastName = ln;
    }

    Person(string fn):firstName(fn), lastName("")//, cat(NULL)
    {
        std::cout << "Init Person: " << this->firstName << "\n";
    }
    ~Person()
    {
        auto name = this->getFullName();
        cout << "Destroy Person: " << name << endl;
    }

    Cat *cat;

    string getFullName()
    {
        return this->firstName + " " + this->lastName;
    }

    void sayHello()
    {
        auto name = this->getFullName();
        cout << "Hello from " << name << endl;
        if (this->cat != NULL)
        {
            cout << "-------have a cat--------" << &(this->cat) << endl;
            this->cat->sayHello();
            cout << "-------------------------" << endl
                 << endl;
        }
    }

    void sayGoodbye();
};