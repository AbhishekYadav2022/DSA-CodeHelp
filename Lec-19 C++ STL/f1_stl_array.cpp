// Standard Template Library
// Array 

#include <iostream>
#include <array>

using namespace std;
int main()
{
    // Basic array
    int basic[3] = {
        0,
        1,
        2,
    };

    // STL Array
    array<int, 3> arr = {0, 1, 2};

    // Getting size
    int size = arr.size();

    // Printing elements
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    // Other stuff
    cout << "Element at 2nd index: " << arr.at(2) << endl;
    cout << "Empty or not: " << arr.empty() << endl;
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    return 0;
}