#include <iostream>
#include "accum.cpp"

using namespace std;

template <class T>
T maxt(const T &t1, const T &t2)
{
    return t1 < t2 ? t2 : t1;
}

template <typename T1, typename T2>
class MyClass
{
public:
    // Member variables with template types
    T1 data1;
    T2 data2;

    // Constructor to initialize member variables
    MyClass(T1 value1, T2 value2) : data1(value1), data2(value2) {}

    // Function to print member variables
    void printData()
    {
        std::cout << "data1: " << data1 << std::endl;
        std::cout << "data2: " << data2 << std::endl;
    }
};

int main()
{
    cout << "maxt(11,2) = " << maxt(10, 2) << endl;
    cout << "maxt<double>(11,2) = " << maxt<double>(10, 22.3) << endl;

    Accum<int> a(2);
    cout << "Accum(2)+3 = " << a + 3 << endl;
    a += 10;
    cout << "a.GetTotal()= " << a.GetTotal() << endl;
    cout << "Accum(\"abc\")+\"d\" = " << Accum<string>("abc") + "d" << endl;

    // MyClass instantiated with int and double
    MyClass<int, double> obj1(5, 3.14);
    obj1.printData(); // Output: data1: 5, data2: 3.14

    // MyClass instantiated with string and char
    MyClass<std::string, char> obj2("Hello", '!');
    obj2.printData(); // Output: data1: Hello, data2: !
    return 0;
}