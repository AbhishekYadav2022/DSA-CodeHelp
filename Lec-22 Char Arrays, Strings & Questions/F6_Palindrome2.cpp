// Check if the string is palindrome(if case does not matter)
// Ref: https://www.rapidtables.com/code/text/ascii-table.html
#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    // A - A + a = a
    // 65 - 65 + 97 = 97

    // B - A + a = b
    // 66 - 65 + 97 = 98

    // D - A + a = d
    // 68 - 65 + 97 = 100

    // N - A + a = n
    // 78 - 65 + 97 = 110

    if ((ch) >= 'a' & ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        if (toLowerCase(arr[s]) != toLowerCase(arr[e]))
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
    // char str[20] = "malylam";
    char str[20] = "536635";

    int len = getLength(str);

    cout << "Palindrome: " << checkPalindrome(str, len);

    return 0;
}