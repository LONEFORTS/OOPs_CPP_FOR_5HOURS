// Program to demonstrate Bitwise and Increment/Decrement operators in C++

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3;   // Binary: a = 0101, b = 0011

    cout << "Initial values:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Bitwise Operators
    cout << "\nBitwise Operator Results:" << endl;
    cout << "a & b  : " << (a & b) << endl;   // AND
    cout << "a | b  : " << (a | b) << endl;   // OR
    cout << "a ^ b  : " << (a ^ b) << endl;   // XOR
    cout << "~a     : " << (~a) << endl;      // NOT
    cout << "a << 1 : " << (a << 1) << endl;  // Left Shift
    cout << "a >> 1 : " << (a >> 1) << endl;  // Right Shift

    // Increment and Decrement Operators
    int x = 10;

    cout << "\nIncrement / Decrement Results:" << endl;
    cout << "x = " << x << endl;
    cout << "x++ = " << x++ << endl;  // Post-increment
    cout << "After x++ , x = " << x << endl;

    cout << "++x = " << ++x << endl;  // Pre-increment

    cout << "x-- = " << x-- << endl;  // Post-decrement
    cout << "After x-- , x = " << x << endl;

    cout << "--x = " << --x << endl;  // Pre-decrement

    return 0;
}