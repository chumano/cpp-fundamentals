#pragma once

#include <string>
using std::string;

class Resource
{
private:
    std::string name;

public:
    Resource();
    Resource(string name);
    ~Resource();

    string GetName() const;
};
