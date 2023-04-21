#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[size] = {1, 3, 2, 3, 1, 2, 4};

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "Unique element: " << ans << endl;

    return 0;
}