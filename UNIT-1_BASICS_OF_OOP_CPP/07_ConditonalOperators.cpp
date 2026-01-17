// Program to demonstrate the Conditional (Ternary) Operator in C++

#include <iostream>
using namespace std;

int main()
{
    int a, b, max;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Conditional (Ternary) Operator
    max = (a > b) ? a : b;

    cout << "The greater number is: " << max << endl;

    return 0;
}