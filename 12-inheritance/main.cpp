#include <iostream>
#include <memory>
#include "Person.h"
#include "Tweeter.cpp"
#include "Youtuber.cpp"

using namespace std;

int GetAge(Person p) { return p.GetAge(); }
int GetAgeRef(Person &p) { return p.GetAge(); }
int GetAgePointer(Person *p) { return p->GetAge(); }
int main()
{
    Person p("chumano");
    Person &rP = p;
    Person *pP = &p;

    Tweeter t("katy");
    Person *pPersonT = &t;
    Person &rPersonT = t;
    Tweeter &rTweeter = t;
    cout << "Person Name: " << p.GetName() << endl;
    cout << "=========NO Virtual==============" << endl;
    cout << "pPersonT Name: " << pPersonT->GetName() << endl;
    cout << "rPersonT Name: " << rPersonT.GetName() << endl;
    cout << "rTweeter Name: " << rTweeter.GetName() << endl;

    cout << "=========Virtual==============" << endl;
    cout << "Tweeter VName: " << pPersonT->VGetName() << endl;
    cout << "rPersonT Name: " << rPersonT.VGetName() << endl;
    cout << "rTweeter Name: " << rTweeter.VGetName() << endl;

    cout << "=============Slicing convert=================" << endl;
    Tweeter tSam("sam");

    Person Sam = tSam;
    cout << "tSam VName: " << tSam.VGetName() << endl;
    cout << "Sam VName: " << Sam.VGetName() << endl; // #joinedYEar is sliced

    cout << "tSam GetAge: " << GetAge(tSam) << endl; // this call Person.GetAge
    cout << "Sam GetAge: " << GetAge(Sam) << endl;   // this call Person.GetAge

    cout << "tSam GetAgeRef: " << GetAgeRef(tSam) << endl; // this call Twitter.GetAge
    cout << "Sam GetAgeRef: " << GetAgeRef(Sam) << endl;   // this call Person.GetAge

    cout << "tSam GetAgePointer: " << GetAgePointer(&tSam) << endl; // this call Twitter.GetAge
    cout << "Sam GetAgePointer: " << GetAgePointer(&Sam) << endl;   // this call Person.GetAge

    cout << "=============Pointer cast=================" << endl;
    //shared_ptr<Person> spSam = make_shared<Tweeter>("sam");
    //cout << "spSam VName: " << spSam->VGetName() << endl;

    Tweeter tSam2("sam");
    Person* pPersonSam2 = &tSam2;
    Tweeter* pTwitterSam2 = (Tweeter*)pPersonSam2;
    
    //Tweeter* pTwitterSam2 = pPersonSam2; //#error on coding
    Youtuber* pYoutuberSam2 = (Youtuber*)pPersonSam2; //not safe, error on runtime
    //Youtuber* pYoutuberSam2 = static_cast<Youtuber*>(pPersonSam2); // error on coding
    Youtuber* pYoutuberSamNull = dynamic_cast<Youtuber*>(pPersonSam2); // pYoutuberSam3 is null
    
    cout << "pTwitterSam2 VName: " << pTwitterSam2->VGetName() << endl;
    cout << "pYoutuberSamNull : " << (pYoutuberSamNull==nullptr) << endl;
    return 0;
}