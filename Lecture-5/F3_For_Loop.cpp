#include <iostream>
using namespace std;
int main()
{
    // For loop 1
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // For loop 2
    int n = 0;
    cout << "Again" << endl;
    for (; n < 10;)
    {
        cout << n << endl;
        n++;
    }

    // For loop 3
    int x = 1;
    cout << "Once Again" << endl;
    for (;;)
    {
        if (x <= 10)
        {
            cout << x << endl;
        }
        else
        {
            break;
        }
        x++;
    }
}