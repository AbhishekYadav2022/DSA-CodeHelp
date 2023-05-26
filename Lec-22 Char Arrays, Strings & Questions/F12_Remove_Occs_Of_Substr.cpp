// Remove All Occurrences of a Substring
// Problem: https://www.leetcode.com/problems/remove-all-occurences-of-a-substring/
#include <iostream>
using namespace std;

string removeOccurences(string str)
{
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'c' && str[i - 1] == 'b' && str[i - 2] == 'a')
        {
            temp.pop_back();
            temp.pop_back();
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string str = "Thisabcisabcaabcstring";
    cout << removeSubstr(str);
    return 0;
}