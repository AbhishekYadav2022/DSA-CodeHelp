#include <iostream>
using namespace std;

int main()
{
    int *ptr; // Don't initiliaze with 0

    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    int num = 5;
    int a = num;

    cout << a << endl;
    cout << num << endl;

    a++;

    cout << a << endl;
    cout << num << endl;

    int *ptr2 = &num;
    cout << "Address of ptr2: " << ptr2 << endl;
    cout << "Vlaue at ptr2: " << *ptr2 << endl;

    (*ptr2)++;

    cout << "Vlaue at ptr2: " << *ptr2 << endl;

    // copying a pointer
    int *q = ptr2;
    cout << ptr2 << " - " << q << endl;
    cout << *ptr2 << " - " << *q << endl;

    return 0;
}