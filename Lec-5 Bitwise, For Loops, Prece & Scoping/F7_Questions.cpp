#include <iostream>
using namespace std;

int main()
{
    // Question - 1
    for (int i = 0; i < 100; i++)
    {
        cout << i << " ";
        i++;
    }

    // Question - 2 - Infinite Loop
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
        i--;
    }

    // Question - 3
    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }

    // Question - 4
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    // Question - 5
    int a = 5;
    cout << a << endl;
    if (true)
    {
        int b = 6;
        cout << b << endl;
    }
    // cout << b << endl; // b is not defined 
    return 0;
}