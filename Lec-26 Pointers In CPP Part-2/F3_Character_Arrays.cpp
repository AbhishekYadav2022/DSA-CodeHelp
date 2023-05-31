#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl; // prints address
    cout << ch << endl;  // prints entire string

    char *c = &ch[0];
    char *c2 = &ch[2];
    char *c4 = &ch[4];
    int *i = &arr[0];

    cout << c << endl;  // prints string
    cout << c2 << endl; // prints string
    cout << c4 << endl; // prints string
    cout << i << endl;  // prints address of first element

    char temp = 'v';
    char *ptr = &temp;

    // Very Important
    cout << "ADDRESS: " << ptr << endl; // prints unless it gets a null char

    // char *c = "abcd" // Not to do // Risky

    return 0;
}