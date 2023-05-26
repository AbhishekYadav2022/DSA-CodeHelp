// Remove All Occurrences of a Substring
// Problem: https://www.leetcode.com/problems/remove-all-occurences-of-a-substring/

#include <iostream>
using namespace std;

string removeOccs(string str, string part)
{
    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main()
{
    string str = "This is a string";

    string new_str = removeOccs(str, "is");

    cout << new_str;
    return 0;
}