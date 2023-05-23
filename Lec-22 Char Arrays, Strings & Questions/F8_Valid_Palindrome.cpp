// Check if the string is palindrome(if case does not matter)
// Ref: https://www.rapidtables.com/code/text/ascii-table.html
#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
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
            if (!isalnum(arr[s]))
            {
                while (!isalnum(arr[s]))
                {
                    s++;
                }
            }
            else if (!isalnum(arr[e]))
            {
                while (!isalnum(arr[e]))
                {
                    e--;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {

            s++;
            e--;
        }
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
    char str[22] = "h@#^#r@#&a&***^m*a$rh";

    int len = getLength(str);

    cout << "Palindrome: " << checkPalindrome(str, len);

    return 0;
}