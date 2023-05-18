// Reversing array after a specific position
#include <iostream>
#include <vector>

using namespace std;

// Function to reverse
vector<int> reverse(vector<int> v, int m)
{
    int s = m, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

// Function to print
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(13);
    v.push_back(17);

    print(v);

    vector<int> ans = reverse(v, 2);

    cout << "Reversed array: ";
    print(ans);

    return 0;
}