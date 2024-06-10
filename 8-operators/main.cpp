#include <iostream>
#include <bitset>
#include "overloading.cpp"

using namespace std;
void arithmetic()
{
    cout << "=============arithmetic=============" << endl;
    // + - * /
    // += -= *= /=
    // i++ ++i  i-- --i
    // %
}

void comparision()
{
    cout << "=============comparision=============" << endl;
    // < > <= >=
    // ==
    // !=
    // && ||
    // !
}

void bitwise()
{
    cout << "=============bitwise=============" << endl;
    // & : and bit
    // | : or bit
    // ^ : xor
    // << : bit shift lef
    // >> : bit shift right
    cout << " 0 ^ 0 = " << (0 ^ 0) << endl;
    cout << " 1 ^ 1 = " << (1 ^ 1) << endl;
    cout << " 1 ^ 0 = " << (1 ^ 0) << endl;
    cout << " 0 ^ 1 = " << (0 ^ 1) << endl;
    cout << " 1 << 3 = " << (1 << 3) << " = "<< (bitset<5>(1 << 3)).to_string() << endl;
    cout << " 16 >> 3 = " << (16 >> 3) << " = "<< (bitset<5>(16 >> 3)).to_string() << endl;
}

//user defined operator
void overloading(){
    cout << "=============overloading=============" << endl;
    Student s1(10);
    Student s2(20);
    cout << "Student(10) < Student(20) : " <<  (s1 < s2) << endl;
    cout << "Student(10) > Student(20) : " <<  (s1 > s2) << endl;
    cout << "Student(10) == Student(20) : " <<  (s1 == s2) << endl;

     cout << "Student(10) < 9 : " <<  (s1 < 9) << endl;
    cout << "Student(10) > 9 : " <<  (s1 > 9) << endl;
    cout << "Student(10) == 9 : " <<  (s1 == 9) << endl;

    cout << "Student(10) + Student(20) : " <<  (s1 + s2) << endl;
    cout << "++Student(10) : " <<  (++s1) << endl;
    cout << "Student(10)++ : " <<  (s1++) << endl;
    cout << "Student(10): " <<  s1.age << endl;
}
int main()
{
    arithmetic();
    comparision();
    bitwise();
    overloading();
    return 0;
}