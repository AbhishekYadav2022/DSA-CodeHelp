#include <iostream>
using namespace std;

int main()
{
    //* Question 4

    int *p = 0;
    int first = 110;

    *p = first; // Error
    cout << *p << endl;

    return 0;
}