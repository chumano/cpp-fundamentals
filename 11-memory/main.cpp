#include <iostream>
#include "Resource.h"
#include "Person.cpp"

using namespace std;

void local_pointer()
{

    {
        // on stack
        Resource localResource("local");
        string localString = localResource.GetName();
    }

    // store on heap
    Resource *pResource = new Resource("[new]");
    string newStr = pResource->GetName();

    delete pResource;
    // should to set to NULL after delete
    pResource = nullptr;
    cout << "After delete pResource" << endl;
    cout << (pResource == nullptr) << endl;
}
void smart_pointer()
{
    Person2 p("hoa", "dai");
    p.AddResource();
    int count = p.pReource.use_count();
    std::cout << "Reference count after creation: " << count << std::endl; //=1
    Person2 p2 = p;
    count = p2.pReource.use_count(); // same as p.pReource.use_count();
    std::cout << "Reference count after sharing: " << count << std::endl; //=2

    auto pR = p.pReource;
    count = p2.pReource.use_count(); 
    std::cout << "Reference count after sharing2: " << count << std::endl; //=3

    weak_ptr<Resource> pR2 = p.pReource;
    count = p2.pReource.use_count(); 
    std::cout << "Reference count after weak sharing3: " << count << std::endl; //=3
    // unique_ptr : Noncopyable (use std::move)

    // shared_ptr : Ref counted

    // weak_ptr : let you "peek" a shared_ptr without increase ref count
}
int main()
{
    cout << "Hello :" << "" << endl;
    local_pointer();

    cout << "=========================" << endl;
    Person p("chu", "no");
    p.AddResource();

    Person p2 = p; // this call Person(const Person &p)
    Person p3("loc", "hoang");
    p3 = p; // this call operator=

    cout << "=========================" << endl;
    smart_pointer();
    cout << "=========================" << endl;
    return 0;
}