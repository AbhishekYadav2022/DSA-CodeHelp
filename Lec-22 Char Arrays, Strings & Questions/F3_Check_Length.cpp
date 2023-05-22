// Get the length of a string 
#include <iostream>
using namespace std;

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
    char name[20] = "Abhishek";
    char name2[20] = "Shubhyansh";

    cout << "Length: " << getLength(name) << endl;
    cout << "Length: " << getLength(name2) << endl;
    return 0;
}