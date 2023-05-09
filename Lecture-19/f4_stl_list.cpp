#include <iostream>
#include <list>

using namespace std;
int main()
{
    // Creating a list
    list<int> l(5, 100);
    l.push_back(2);
    l.push_front(1);

    for (int i : l)
    {
        cout << i << " ";
    }

    // Push & Pop
    l.pop_back();
    l.pop_front();

    // Copying
    list<int> list2(l);

    // Erasing
    l.erase(l.begin());
    cout << endl;
    for (int i : l)
    {
        cout << i << " ";
    }

    return 0;
}