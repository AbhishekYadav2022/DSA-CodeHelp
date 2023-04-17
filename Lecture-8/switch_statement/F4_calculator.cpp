// Simple calculator using switch statement 
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter one of the operators(+, -, *, /, %): ";
    cin >> ch;
    switch (ch)
    {

    case '+':
        cout << "Sum: " << a + b << endl;
        break;
    case '-':
        cout << "Difference: " << a - b << endl;
        break;
    case '*':
        cout << "Multiplication: " << a * b << endl;
        break;
    case '/':
        cout << "Division: " << a / b << endl;
        break;
    case '%':
        cout << "Modulus: " << a % b << endl;
        break;
    default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}