// Set in STL
#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<int> s;

    s.insert(0);
    s.insert(1);
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    for (auto i : s) // Why auto
    {
        cout << i << endl;
    }

    return 0;
}