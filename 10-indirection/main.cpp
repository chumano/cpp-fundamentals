#include <iostream>

using namespace std;

void demo1();
class Car
{
private:
    string name;

public:
    Car(string name) : name(name) {}
    string GetName()
    {
        return this->name;
    }
};

int main()
{

    int *pNull = nullptr;
    int *pNull2 = NULL;
    cout << "pNull == NULL : " << (pNull == NULL) << endl;
    cout << "pNull == nullptr : " << (pNull == nullptr) << endl;
    cout << "pNull2 == NULL : " << (pNull2 == NULL) << endl;
    cout << "pNull2 == nullptr :" << (pNull2 == nullptr) << endl;
    cout << "pNull == pNull2 : " << (pNull == pNull2) << endl;
    cout << "================" << endl;

    if (pNull)
    {
        // UNREACHABLE CODE because pNull is null
        *pNull = 3;
        cout << "*pNull : " << (*pNull) << endl;
    }

    demo1();

    cout << "================" << endl;

    Car car("Audi");
    Car *pCar = &car;
    auto car2 = *pCar;
    cout << "car.GetName() = " << car.GetName() << endl;
    cout << "pCar->GetName() = " << pCar->GetName() << endl;
    cout << "pCar->GetName() = " << (*pCar).GetName() << endl;
    cout << "&car = " << &car << endl;
    cout << "&car2 = " << &car2 << endl;
    cout << "pCar = " << pCar << endl;

    cout << "================" << endl;
    // const
    int zero = 0;
    const int &crZero = zero;
    // const int &crZero2 = crZero; //OK
    // int &crZero2 = crZero; //ERROR

    // crZero =2; // error bc this is const
    zero += 2;
    cout << "zero = " << zero << endl;
    cout << "crZero = " << crZero << endl;

    const int  * pZero = &zero;
    // (*pZero)++; //ERROR : can't change value
    int hunred = 100;
    pZero =  &hunred;

    const int  * const pZero2 = &zero;
    // (*pZero2)++; //ERROR : can't change value
    // pZero2 = &hunred; //ERROR : can't change pointer
    return 0;
}

void demo1()
{
    int A = 1;
    // References
    int &rA = A;
    // Pointers
    int *pA = &A;

    A++;
    cout << "A = " << A << endl;
    cout << "&A (address of A)= " << &A << endl;
    cout << "rA (same value of A)= " << rA << endl;
    cout << "&rA (same address of A)= " << &rA << endl;
    cout << "pA (same address of A) = " << pA << endl;
    cout << "*pA (same value of A)= " << *pA << endl;
    cout << "&pA (address of pointer)= " << &pA << endl;

    cout << "================" << endl;
    rA++;
    (*pA)++;
    cout << "A = " << A << endl;
    cout << "&A = " << &A << endl;
    cout << "rA = " << rA << endl;
    cout << "&rA = " << &rA << endl;
    cout << "pA = " << pA << endl;
    cout << "*pA = " << *pA << endl;
    cout << "&pA = " << &pA << endl;

    // Change Ref and Pointer
    cout << "================" << endl;
    int B = 10;
    rA = B; // change value of A and rA
    pA = &B;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "&A = " << &A << endl;
    cout << "&B = " << &B << endl;
    cout << "rA = " << rA << endl;
    cout << "&rA = " << &rA << endl;
    cout << "pA (changed to address of B)= " << pA << endl;
    cout << "*pA = " << *pA << endl;
    cout << "&pA = " << &pA << endl;
}