#include <iostream>
using namespace std;

int main()
{
    //* Question 2
    
    int first = 6;
    int *p = &first;
    int *q = p;

    (*q)++;
    cout << first << endl;

    return 0;
}