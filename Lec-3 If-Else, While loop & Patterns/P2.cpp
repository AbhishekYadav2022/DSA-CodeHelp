#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 2;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
        }
        i++;
    }
}