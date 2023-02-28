#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World :-)" << endl;

    int a = 98;

    cout << a << endl;

    char b = 'c';

    cout << b << endl;

    bool bl = true;

    cout << bl << endl;

    float f = 3.4;

    cout << f << endl;

    int size1 = sizeof(a);
    cout << "Size of int is " << size1 << " bytes" << endl;

    int size2 = sizeof(b);
    cout << "Size of char is " << size2 << " bytes" << endl;

    int size3 = sizeof(bl);
    cout << "Size of bool is " << size3 << " bytes" << endl;

    int size4 = sizeof(f);
    cout << "Size of float is " << size4 << " bytes" << endl;

    // TypeCasting
    char character = 'a';
    int num = character;
    cout << num << endl;

    char something = a;
    cout << something << endl;

    // Operators
    int sum = 4 + 5;
    cout << sum << endl;

    int subtraction = 5 - 4;
    cout << subtraction << endl;

    cout << 4 / 5 << endl;
    cout << 6 / 4 << endl;
}