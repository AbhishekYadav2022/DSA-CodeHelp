// Implementing algorithm

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(13);
    v.push_back(32);

    // Binary Search
    int num = 11;
    cout << "Finding " << num << " -> " << binary_search(v.begin(), v.end(), num) << endl;

    // Lower Bound
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 11) - v.begin() << endl;

    // Upper Bound
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    // Max & Min
    int a = 6;
    int b = 38;

    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;

    // Swap
    swap(a, b);
    cout << a << " " << b << endl;

    // Reverse String
    string s = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
    cout << "Original string -> " << s << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed string -> " << s << endl;

    // Rotate Array
    rotate(v.begin(), v.begin() + 3, v.end());

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}