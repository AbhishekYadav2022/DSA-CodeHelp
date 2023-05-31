#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void updateAddress(int *p)
{
    p = p + 1;
    // cout << "Inside: " << p << endl;
}

void updateValue(int *p)
{
    *p = *p + 1;
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);

    // Updating Address 
    cout << "Address -> " << endl;
    cout << "Before: " << p << endl;
    updateAddress(p);
    cout << "After: " << p << endl;

    // Updating Value
    cout << "Value -> " << endl;
    cout << "Before: " << *p << endl;
    updateValue(p);
    cout << "After: " << *p << endl;

    return 0;
}