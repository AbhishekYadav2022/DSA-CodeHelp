// Using exit() function
// Breaking infinite loop
#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    while (true)
    {
        switch (num)
        {
        case 1:
            cout << "One" << endl;
            break;

        case 2:
            cout << "Two" << endl;
            exit(0); // To exit the program
            break;

        default:
            break;
        }
    }

    return 0;
}