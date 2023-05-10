// Using map
#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    // Inserting elements
    m[1] = "Abhishek";
    m[2] = "Kumar";
    m[3] = "Yadav";

    m.insert({5, "Bheem"});

    // Printing elements
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Checking if an element is present or not
    cout << "finding 13 -> " << m.count(1) << endl;

    // Erasing
    m.erase(5);
    cout << "After erasing: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Other -> throwing error -> to understand
    // auto itr = m.find(5);
    // for (auto i = itr; i != m.end(); i++)
    // {
    //     cout << (*i).first << endl;
    // }

    return 0;
}