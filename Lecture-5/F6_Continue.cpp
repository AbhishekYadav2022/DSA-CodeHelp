#include <iostream>
using namespace std;

int main()
{
    // Code 1
    for (int i = 0; i < 5; i++)
    {
        cout << "Statement 1" << endl;
        cout << "Statement 2" << endl;
        cout << i << endl;
        continue;

        cout << "This statement won't execute" << endl;
    }

    // Code 2
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
}