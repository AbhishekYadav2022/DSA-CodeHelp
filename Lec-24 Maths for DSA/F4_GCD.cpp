// GCD or HCF
// For More https://www.codingninjas.com/blog/2020/07/25/explained-euclids-gcd-algorithm/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int num1, num2;

    cout << "Enter first num: ";
    cin >> num1;

    cout << "Enter first num: ";
    cin >> num2;

    cout << "GCD or HCF: " << gcd(num1, num2);
    return 0;
}