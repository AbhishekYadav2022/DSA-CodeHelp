// Reverse words in a string
#include <iostream>
using namespace std;

void reverse(char str[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}

string revString(string str)
// {
//     string rev_str;
//     string temp;
//     int j = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if ((str[i] == ' ') || (str[i] == '\0'))
//         {
//             revWord(temp);
//             rev_str = rev_str + temp;
//             j = 0;
//         }
//         else
//         {
//             temp[j] = str[i];
//             j++;
//         }
//     }
//     return rev_str;
// }

int main()
{
    char str[5] = "This";
    // string reversedString = revString(str);

    // for (int i = 0; i < reversedString.length(); i++)
    // {
    //     cout << reversedString[i] << " ";
    reverse(str,5);
    for (int i = 0; i < 5; i++)
    {
        cout << str[i];
    }

    return 0;
}