// a preprocessor directive that's designed
//   to prevent a header file
//   from being included multiple times within a single compilation unit
#pragma once

#include <string>
#include <iostream>
#include <memory>
#include "Resource.h"

// using namespace std;
using std::cout;
using std::endl;
using std::string;

class Person
{

private:
    string firstName;
    string lastName;
    Resource *pReource;

public:
    Person()
    {
        this->pReource = nullptr;
    }
    Person(string fn, string ln) : Person()
    {
        this->firstName = fn;
        this->lastName = ln;
    }

    ~Person()
    {
        auto name = this->GetFullName();
        cout << "Destroy Person: " << name << endl;
        delete pReource;
    }

    Person(const Person &p)
    {
        this->firstName = "Copied";
        cout << "copy from " << p.GetFullName() << endl;
        this->pReource = new Resource(p.pReource->GetName());
    }

    Person &operator=(const Person &p)
    {
        auto name = this->GetFullName();
        cout << "operator= " << name << endl;
        delete this->pReource;
        this->pReource = new Resource(p.pReource->GetName());
        return *this;
    }

    string GetFullName() const
    {
        return this->firstName + " " + this->lastName;
    }

    void AddResource()
    {
        auto name = this->GetFullName();

        delete this->pReource;
        this->pReource = new Resource("Reourse of " + name);
    }
};

class Person2
{

private:
    string firstName;
    string lastName;
    

public:
    std::shared_ptr<Resource> pReource;
    Person2()
    {
        this->pReource = nullptr;
    }
    Person2(string fn, string ln) : Person2()
    {
        this->firstName = fn;
        this->lastName = ln;
    }

    ~Person2()
    {
        auto name = this->GetFullName();
        cout << "Destroy Person: " << name << endl;
    }

    // Person2(const Person2 &p)
    // {
    //     this->firstName = "Copied";
    //     cout << "copy from " << p.GetFullName() << endl;
    //     //delete this->pReource;
    //     // this->pReource = new Resource(p.pReource->GetName());
    //
    //     this->pReource.reset();
    //     this->pReource = std::make_shared<Resource>(p.pReource->GetName());
    // }

    // Person2 &operator=(const Person2 &p)
    // {
    //     auto name = this->GetFullName();
    //     cout << "operator= " << name << endl;
    //     //this->pReource = new Resource(p.pReource->GetName());
    //     this->pReource = std::make_shared<Resource>(p.pReource->GetName());
    //     return *this;
    // }

    string GetFullName() const
    {
        return this->firstName + " " + this->lastName;
    }

    string GetResourceName() const
    {
        return pReource ? pReource->GetName() : "NoResource";
    }

    void AddResource()
    {
        auto name = this->GetFullName();

        // delete this->pReource;
        // this->pReource = new Resource("Reourse of " + name);
        this->pReource.reset();
        this->pReource = std::make_shared<Resource>("Reourse of " + name);
    }
};