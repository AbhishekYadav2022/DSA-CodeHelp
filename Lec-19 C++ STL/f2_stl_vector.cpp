// Standard Template Library
// Vector
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // Creating a vector
    vector<int> v;

    // Capacity -> Numbers of elements that the vector can store without increasig its capacity
    // Checking capacity
    cout << "Capacity: " << v.capacity() << endl;

    // Pushing element
    v.push_back(9);

    // Checking capacity again
    cout << "Capacity: " << v.capacity() << endl;

    // Pushing element again
    v.push_back(30);

    // Checking capacity again
    cout << "Capacity: " << v.capacity() << endl;

    // Pushing element again
    v.push_back(37);

    // Checking capacity again
    cout << "Capacity: " << v.capacity() << endl;

    // Size -> Number of total elements in vector
    // Checking size
    cout << "Size: " << v.size() << endl;

    // Front & Back
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // Traversal
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Pop
    v.pop_back();

    // Traversal
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Clearing vector
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.clear();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Creating a vector and initializing its all elements with 1
    vector<int> vec1(5, 1);
    for (int i : vec1)
    {
        cout << i << " ";
    }

    // Copying all elements of vector vec1 to vec2
    vector<int> vec2(vec1);
    for (int i : vec1)
    {
        cout << i << " ";
    }
    return 0;
}