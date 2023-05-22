#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "Your name is " << name << endl;

    name[4] = '\0';

    cout << "Your name is " << name << endl;
    return 0;
}