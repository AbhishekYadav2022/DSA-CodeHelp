// Program to change a binary number to decimal number
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int num, digit;
    int i = 0, ans = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (num != 0)
    {
        digit = num & 1;
        if (digit == 1)
        {
            ans = ans + (digit * pow(2, i));
        }

        num = num / 10;
        i++;
    }
    cout << "Decimal Number: " << ans << endl;

    return 0;
}