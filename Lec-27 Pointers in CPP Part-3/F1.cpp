// Double Pointer in C++

#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    int *ptr = &num;

    int **ptr2 = &ptr;

    int ***ptr3 = &ptr2;

    cout << "address of num: " << &num << endl;
    cout << "value of ptr: " << ptr << endl
         << endl;

    cout << "address of ptr: " << &ptr << endl;
    cout << "value of ptr2: " << ptr2 << endl
         << endl;

    cout << "address of ptr2: " << &ptr2 << endl;
    cout << "value of ptr3: " << ptr3 << endl
         << endl;

    cout << "address of ptr3: " << &ptr3 << endl
         << endl;

    cout << "Value of num: " << num << endl;
    cout << "Value of num: " << *ptr << endl;
    cout << "Value of num: " << **ptr2 << endl;
    cout << "Value of num: " << ***ptr3 << endl;

    return 0;
}