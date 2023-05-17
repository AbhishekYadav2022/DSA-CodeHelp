// Queue in STL
#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // Creating queue
    queue<string> q;

    // Pushing elements in queue
    q.push("Abhishek");
    q.push("Kumar");
    q.push("Yadav");

    // Size of queue
    cout << "Size: " << q.size() << endl;

    cout << "First element: " << q.front() << endl;
    q.pop();
    cout << "First element: " << q.front() << 
    endl;
    q.pop();
    cout << "First element: " << q.front() << 
    endl;
    q.pop();

    // Size of queue
    cout << "Size: " << q.size() << endl;

    return 0;
}