#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd
bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if (isEven(a))
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }
    return 0;
}