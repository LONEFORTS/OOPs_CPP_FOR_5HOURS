
// Program to demonstrate copy constructor

#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    // Copy constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
    }

    void display()
    {
        cout << "Roll No : " << roll << endl;
        cout << "Name    : " << name << endl;
    }
};

int main()
{
    Student s1(101, "Amit");   // original object
    Student s2 = s1;           // copy constructor called

    s1.display();
    s2.display();

    return 0;
}