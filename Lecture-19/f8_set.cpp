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

    // Printing values
    for (auto i : s) // Why auto
    {
        cout << i << endl;
    }
    cout << endl;

    // Deleting first element
    s.erase(s.begin());

    for (auto i : s) // Why auto
    {
        cout << i << endl;
    }
    cout << endl;

    // Deleting second element
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s) // Why auto
    {
        cout << i << endl;
    }
    cout << endl;

    // Using count function
    cout << "5 is present or not -> " << s.count(5) << endl;
    cout << "-5 is present or not -> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}