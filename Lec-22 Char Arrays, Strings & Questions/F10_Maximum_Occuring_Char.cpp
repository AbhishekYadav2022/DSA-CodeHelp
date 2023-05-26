// Return maximum occuring character in an input string
#include <iostream>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;

    cout << "Enter the string: ";
    cin >> s;
    cout << "Character that came maximum times: " << getMaxOccCharacter(s) << endl;

    return 0;
}