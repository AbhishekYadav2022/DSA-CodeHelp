// Program to reverse a number
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, digit, ans = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        if ((ans > INTMAX_MAX / 10) || (ans < INTMAX_MIN / 10))
        {
            ans = 0;
            break; 
        }
        else
        {
            ans = (ans * 10) + digit;
        }
        num = num / 10;
    }
    cout << "Reverse Number: " << ans << endl;

    return 0;
}