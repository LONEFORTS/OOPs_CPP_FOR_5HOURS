//  Finding maximum of two numbers using class

#include <iostream>
using namespace std;

class Maximum
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void displayMax()
    {
        if (a > b)
            cout << "Maximum number is: " << a << endl;
        else
            cout << "Maximum number is: " << b << endl;
    }
};

int main()
{
    Maximum obj;

    obj.accept();
    obj.displayMax();

    return 0;
}