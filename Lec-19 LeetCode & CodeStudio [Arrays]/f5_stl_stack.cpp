#include <iostream>
#include <stack>

using namespace std;
int main()
{
    // Creation
    stack<string> s;

    // Pushing elements
    s.push("Abhishek");
    s.push("Kumar");
    s.push("Yadav");

    // Pop
    cout << "Top Element-> " << s.top() << endl;
    s.pop();
    cout << "Top Element-> " << s.top() << endl;
    return 0;
}