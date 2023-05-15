#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rev = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    cout << "Reverse: " << rev << endl;

    return 0;
}