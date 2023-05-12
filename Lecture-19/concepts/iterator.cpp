// Iterator

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    v.push_back(7);
    v.push_back(8);

    // <--------First way to traverse-------->
    // iterator variable
    vector<int>::iterator itr;

    cout << "Elements of vector: ";
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }

    // <--------Second way to traverse-------->
    cout << "Elements of vector: ";
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    // <--------Third way to traverse-------->
    vector<int>::iterator i = v.begin();
    cout << "Elements of vector: ";
    for (i; i != v.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}