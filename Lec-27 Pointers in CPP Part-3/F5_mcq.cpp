#include <iostream>
using namespace std;

int main()
{
    //* Question 3

    int first = 8;
    int *p = &first;

    cout << (*p)++ << " ";
    cout << first;

    return 0;
}