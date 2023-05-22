// Check if the string is palindrome
#include <iostream>
using namespace std;

bool checkPalindrome(char arr[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[20] = "malylam";

    int len = getLength(str);

    cout << "Palindrome: " << checkPalindrome(str, len);

    return 0;
}