// Count number of 1 bits.
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (num != 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    cout << "Number of 1 bits: " << count << endl;
    return 0;
}