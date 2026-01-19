
// Program to demonstrate implicit and explicit constructor calling

#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    Demo(int a)
    {
        x = a;
        cout << "Constructor called, x = " << x << endl;
    }
};

int main()
{
    // Implicit constructor call
    Demo obj1 = 10;

    // Explicit constructor call
    Demo obj2(20);

    return 0;
}