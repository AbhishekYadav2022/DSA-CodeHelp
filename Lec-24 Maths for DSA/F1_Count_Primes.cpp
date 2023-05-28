// Count Primes
// Problem: https://leetcode/problems/count-primes/
// TLE Error For Greater Inputs - 500000
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num <= 1)
        {
            return false;
        }

        if (num % i == 0)
        {
            return false;
        }
    }
}

int countPrimes(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Number of primes: " << countPrimes(num);
    
    return 0;
}