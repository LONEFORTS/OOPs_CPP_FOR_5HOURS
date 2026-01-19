
// Program to demonstrate explicit call of parameterized constructor

#include <iostream>
using namespace std;

class Employee
{
    int id;
    float salary;

public:
    Employee(int i, float s)
    {
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Employee ID   : " << id << endl;
        cout << "Salary        : " << salary << endl;
    }
};

int main()
{
    // Explicit constructor call
    Employee e1 = Employee(201, 45000.50);

    e1.display();

    return 0;
}