#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int count = 4;
    for (int i = count; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " " << n << " ";
            n++;
        }
        cout << endl;
    }
}