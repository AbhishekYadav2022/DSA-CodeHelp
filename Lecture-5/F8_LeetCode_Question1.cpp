// Subtract the product and sum of the digits of an integer. 
#include <iostream>
using namespace std;

int main()
{
    int num, product = 1, sum = 0;
    cout << "Enter the number: ";
    cin >> num;

    while (num != 0)
    {
        sum = sum + (num % 10);
        product = product * (num % 10);
        num = num / 10;
    }
    cout << "Product: " << product << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << product - sum << endl;

    return 0;
}