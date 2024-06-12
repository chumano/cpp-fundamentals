#include "Resource.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Resource::Resource()
{
};

Resource::Resource(string name)
{
    this->name = name;
};

Resource::~Resource()
{
    cout << this->name << " is destroyed" << endl;
};

std::string Resource::GetName() const
{
    return this->name;
};