// Implementing algorithm
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    // New Vector
    vector<int> vect;
    vect.push_back(12);
    vect.push_back(22);
    vect.push_back(36);
    vect.push_back(2);
    vect.push_back(9);
    vect.push_back(25);

    // Printing
    for (int i : vect)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting
    sort(vect.begin(), vect.end());

    // Printing
    for (int i : vect)
    {
        cout << i << " ";
    }
    cout << endl;

    // Searching
    cout << "Found 22 -> " << binary_search(vect.begin(), vect.end(), 22);
    return 0;
}