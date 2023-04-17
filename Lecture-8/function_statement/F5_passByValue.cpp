#include <iostream>
using namespace std;

// Function
void dummy(int n)
{
    n++;
    cout << "n: " << n << endl;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    dummy(n);
    cout << "n: " << n << endl;
    return 0;
}