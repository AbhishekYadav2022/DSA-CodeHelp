#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1; // Change - NO
    *p2 = *p2 + 1; // Change - YES
}

int main()
{
    int num = 4;

    int *p = &num;
    int **p2 = &p;

    cout << "Before --> " << endl;
    cout << "value of p: " << p << endl;
    cout << "value of p2: " << p2 << endl;

    update(p2);

    cout << "After --> " << endl;
    cout << "value of p: " << p << endl;
    cout << "value of p2: " << p2 << endl;

    return 0;
}