#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

// using this for vector, string, cout
//    or must "std::cout"
using namespace std;

int main()
{
   int x = 0;
   int a = x + 2;

   printf("Hello World!\n");

   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   std::cout << endl;

    
   return 0;
}