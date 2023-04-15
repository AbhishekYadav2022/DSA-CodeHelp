// Important 
#include <iostream>
using namespace std;
int main()
{
    // Question - 1
    int a, b = 1;
    a = 10;
    if (a++)
    {
        cout << b << endl;
    }
    else
    {
        cout << ++b << endl;
    }

    // Question - 2
    int c = 1;
    int d = 2;
    if (c-- > 0 && ++d > 2)
    {
        cout << "Stage1 - Inside If " << endl;
    }
    else
    {
        cout << "Stage2 - Inside else " << endl;
    }
    cout << c << " " << d << endl;

    // Question - 3
    int e = 1;
    int f = 2;

    if (e-- > 0 || ++f > 2)
    {
        cout << "Stage1 - Inside If " << endl;
    }
    else
    {
        cout << "Stage2 - Inside else " << endl;
    }
    cout << e << " " << f << endl;
    
    // Question - 4
    int number = 3;
    cout << (25*(++number)) << endl;

    // Question - 5
    int x = 1;
    int y = x++;
    int z = ++x;
    cout << y << endl;
    cout << z << endl;

    return 0;
}