// Swith Statement
#include <iostream>
using namespace std;
int main()
{
    int n;
    n = 30;
    switch (n)
    {
    case 1:
        cout << "One" << endl;
        break;

    case 2:
        cout << "Two" << endl;
        break;

    case 3:
        cout << "Three" << endl;
        break;

    default:
        cout << "Default" << endl;
    }
    return 0;
}