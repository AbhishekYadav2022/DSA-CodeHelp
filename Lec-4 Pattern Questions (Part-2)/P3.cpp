#include <iostream>
using namespace std;

int main()
{
    int count = 10;
    for (int j = count / 2; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int j = 0; j < count / 2; j++)
    {
        for (int i = 0; i < j; i++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}