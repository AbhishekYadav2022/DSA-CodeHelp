#include <iostream>
using namespace std;

int main()
{
    int temp[10] = {2, 3};
    cout << sizeof(temp) << endl;
    cout << "1st " << sizeof(*temp) << endl;
    cout << "2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    cout << temp << endl;
    cout << ptr << endl;

    // temp = temp + 1; // Error 
    ptr = ptr + 1; // No error

    cout << temp << endl;
    cout << ptr << endl;

    return 0;
}