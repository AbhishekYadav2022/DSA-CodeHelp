#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character or number: "; 
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It is a lowercase character" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "It is an uppercase character" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is a one digit number" << endl;
    }
}