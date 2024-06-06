#include <iostream>
#include "lib/animal.hpp"
#include "lib/cat.cpp"
#include "person.cpp"
#include <memory>

using namespace std;
int main(){
    cout << "User defined type"<< endl
        << "----------------------" 
        << endl;
    fe = FileError::ok;
    auto p = new Point();
     cout << "Point " << p->toString()
        << endl;

    auto person = new Person("loc", "hoang");
    auto name = person->getFullName();
    cout << "Hello to " << name
        << endl;

    person->sayHello();
    person->sayGoodbye();

    delete person;

    Person p2("chuno");
    p2.sayHello();
    Person p3("chuno2");
    p3.cat->name ="chuno2-cat";
    p3.sayHello();
    

    cout << endl
        << "----------------------" 
        << endl;

    auto cat1 = new Cat();
    //catCounter++;
    auto cat2 = new Cat();
    Cat cat3;
    auto cat4 = std::make_unique<Cat>(); //smart pointer L auto delete
    cat1->sayHello();
    cat2->sayHello();
    cat3.sayHello();
    cat4->sayHello();
    
    
    delete cat1;
    delete cat2;
    //cat3 : auto destroyed

    cout << endl
        << "----------------------" 
        << endl;
    return 0;
}

void Person::sayGoodbye(){
    auto name = this->getFullName();
    cout << "Goodbye from " << name
        << endl;
}
