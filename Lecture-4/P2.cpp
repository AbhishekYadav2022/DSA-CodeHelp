#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int count = 6;
    for (int i = 0; i <count ; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " " << n << " ";
            n++;
        }
        cout << endl;
    }
}
