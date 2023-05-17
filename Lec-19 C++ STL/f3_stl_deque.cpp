// Deque in STL
#include <iostream>
#include <deque>

using namespace std;
int main()
{
    // Creating deque
    deque<int> d;

    // Pushing elements
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_front(1);

    // Printing
    for (int i : d)
    {
        cout << i << " ";
    }

    // Pop
    d.pop_back();
    d.pop_front();

    // Other stuff
    cout << "Element at index 1: " << d.at(1);

    cout << "Front: " << d.front();
    cout << "Front: " << d.back();

    cout << "Empty: " << d.empty();

    // Erasing
    cout << endl;
    cout << "Before erasing : ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.erase(d.begin(), d.begin() + 2);
    cout << "After erasing : ";
    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}