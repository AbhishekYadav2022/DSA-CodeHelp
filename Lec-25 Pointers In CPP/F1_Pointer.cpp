#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    double d = 4.5;

    cout << "Value of num: " << num << endl;

    cout << "Address of num: " << &num << endl;

    // Creating Pointer
    int *ptr = &num;
    double *p2 = &d;

    cout << "Address of num: " << ptr << endl;
    cout << "Value of num: " << *ptr << endl;

    cout << "Address of p: " << p2 << endl;
    cout << "Value of p: " << *p2 << endl;

    // Size - size of every pointer is same
    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;

    cout << "Size of souble is " << sizeof(d) << endl;
    cout << "Size of double pointer is " << sizeof(p2) << endl;

    return 0;
}