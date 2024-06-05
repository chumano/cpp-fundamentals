#include <iostream>

int main(){
    // cpp data type range
    //  https://learn.microsoft.com/vi-vn/cpp/cpp/data-type-ranges?view=msvc-170
    // integers
    short s = 124;
    int i = -23;
    int i2(-24);
    int i3{-25};
    long l =323232;

    // unsign
    unsigned int u_i = -1;
    std::cout << "unsigned int u_i: " 
        << u_i 
        << ",  int i : " << i 
        << ",  int i2(-24) : " << i2
        << ",  int i3{-25} : " << i3 
        << std::endl << std::endl;

    // real numbers
    float f =1.0;
    double d = 2;

    // charater
    char c = 'a';
    char c2 = 128; //-128 to 127
    unsigned char c3 = 128; //0 to 255
    std::cout << "char c : " 
        << c  
        << ", char c2 = 128 : " << (int)c2 //-128
        << ", unsigned char c3 : " <<  (int)c3 
        << std::endl<< std::endl; 

    // bool
    bool b = false;
    bool b2 = 0;
    std::cout 
        << "bool b = false: " << b 
        << ", b2=0: " << b2 
        << ", b2 == b: " << (b2 == b)
        << std::endl<< std::endl;

    // auto
    auto a1 = 1;
    auto a2 = 2.2;
    auto a3 = 'c';
    auto a4= "s";
    auto a5 = true;
    auto a6 = 3L; //long
    auto a7 = 1'000'000'000'000; //long
    auto a8 = 0xFF; //255
    auto a9 = 0b101; //5


    // casting type
    double d10 = 2.2;
    int i10 = (int)d10;
    int i11 = static_cast<int>(d10);

    return 0;
}