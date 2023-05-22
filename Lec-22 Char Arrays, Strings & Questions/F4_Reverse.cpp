// Reverse a string
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
    char name[20] = "abcd";

    cout << "String: " << name << endl;

    reverse(name, getLength(name));

    cout << "Reversed String: " << name << endl;

    return 0;
}