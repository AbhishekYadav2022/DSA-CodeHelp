#include <iostream>
using namespace std;

int main()
{
    //* Question 1
    int first = 8;
    int second = 19;

    int *ptr = &second;
    *ptr = 9;

    cout << first << " " << second << endl;

    return 0;
}