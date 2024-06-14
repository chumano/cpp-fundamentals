#include "Person.h"

Person::Person(string name): name(name)
{
}

Person::~Person()
{
}

string Person::GetName(){
    return this->name;
}

string Person::VGetName(){
    return this->name;
}