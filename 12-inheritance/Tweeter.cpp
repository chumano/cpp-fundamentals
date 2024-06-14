#include "Person.h"
class Tweeter : public Person
{
private:
    /* data */
    int joinedYear;

public:
    Tweeter(string name);
    Tweeter(string name, int jY);
    ~Tweeter();

    string GetName();

    string VGetName();

    int GetJoinedY()
    {
        return joinedYear;
    };
    virtual int GetAge(){
        return 0;
    }
};

Tweeter::Tweeter(string name)
    : Person(name)
{
    joinedYear = 1;
}

Tweeter::Tweeter(string name, int jY)
    : Person(name), joinedYear(jY)
{
}

Tweeter::~Tweeter()
{
}

string Tweeter::GetName()
{
    return "@" + Person::GetName()
        +  " #" + to_string (this->joinedYear);
}

string Tweeter::VGetName()
{
    return "@" + Person::GetName() 
        +  " #" + to_string (this->joinedYear);
}