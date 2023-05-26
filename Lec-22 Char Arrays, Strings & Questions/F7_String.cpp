#include <iostream>
using namespace std;
#include <string>
using std::string;

int main()
{
    string str = "This is a string.";

    cout << "Length: " << str.length();

    string line;

    // taking input of string
    cout << "Enter the line below: " << endl;
    // cin.getline(line, 100);

    // compare strings
    string s1 = "abhishek";
    string s2 = "Abhishek";

    // cout << "Ans: " << strcmp(s1, s2);

    // copy string
    string s3;

    // strcpy(s3, s2);

    // -------- Character Array ---------
    char arr[10] = "abc";
    // int len = strlen(arr);

    return 0;
}