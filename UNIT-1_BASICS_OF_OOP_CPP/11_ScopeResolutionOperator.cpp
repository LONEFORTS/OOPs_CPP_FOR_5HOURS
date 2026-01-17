//The scope resolutions operator is used to access the Global variable in the main in which the local variable with same name or value is declared or exists.

#include <iostream>
using namespace std;

int x = 10;   // Global variable

int main()
{
    int x = 20;   // Local variable

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;

    return 0;
}