#include <iostream>

using namespace std;
int main(){
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    bool isPositive = false;
    //if
    if(x>0){
        cout << x << " is a positive number" << endl;
        isPositive = true;
    }else if(x < 0) {
        cout << x << " is a negative number" << endl;
    }

    //switch
    switch (x)
    {
    case 0:
         cout << x << " is zero" << endl;
        break;
    default:
        cout << x << ( isPositive? " is a positive number": " is a negative number") << endl;
        break;
    }


    //while
    auto c = 0;
    while (c != x)
    {
        cout << c << " ";
        if(isPositive){
            c++;
        }else{
            c--;
        }
    }
    cout << endl;
    

    //for
    for(int i = 0; i != x; (isPositive? i++: i--)){
         cout << i << " ";
    }
    cout << endl;
}