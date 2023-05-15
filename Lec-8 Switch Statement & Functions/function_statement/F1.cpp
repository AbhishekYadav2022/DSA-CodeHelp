#include <iostream>
using namespace std;

// Power Function
int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

// Main Function
int main()
{
    int a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;
    cout << "Result: " << power(a, b) << endl;
    return 0;
}