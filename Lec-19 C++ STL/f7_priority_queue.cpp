// Priority Queue
#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // max - heap
    priority_queue<int> max;

    max.push(1);
    max.push(2);
    max.push(3);
    max.push(0);

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << endl;
        max.pop();
    }
    cout << endl;

    cout << "EMPTY-> " << max.empty() << endl;

    // min - heap
    priority_queue<int, vector<int>, greater<int>> min;

    min.push(1);
    min.push(9);
    min.push(4);
    min.push(11);
    min.push(3);

    n = min.size();
    for (int i = 0; i < n; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }

    return 0;
}