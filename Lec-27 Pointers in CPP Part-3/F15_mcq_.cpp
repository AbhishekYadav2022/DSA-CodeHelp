#include <iostream>
using namespace std;

int main()
{
    //* Question 13
    char ch = 'a';
    char *ptr = &ch;

    ch++;
    cout << *ptr << endl;

    return 0;
}