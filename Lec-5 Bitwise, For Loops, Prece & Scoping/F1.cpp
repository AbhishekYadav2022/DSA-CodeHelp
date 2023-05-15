#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 7;

    cout << "a&b = " << (a&b) << endl;
    cout << "a|b = " << (a|b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a^b = " << (a^b) << endl;

    // Left shift 
    cout << (a>>1) << endl;
    cout << (a>>2) << endl;

    //  Right shift 
    cout << (a<<1) << endl;
    cout << (a<<2) << endl;
    cout << (a<<3) << endl;

    // Increment/Decrement
    int c = 7;
    cout << c++ << endl;
    cout << c << endl;
    cout << ++c << endl;

    int d = 7;
    cout << d-- << endl;
    cout << d << endl;
    cout << --d << endl;

    return 0;
}