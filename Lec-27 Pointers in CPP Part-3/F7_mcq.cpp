#include <iostream>
using namespace std;

int main()
{
    //* Question 5
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;

    return 0;
}