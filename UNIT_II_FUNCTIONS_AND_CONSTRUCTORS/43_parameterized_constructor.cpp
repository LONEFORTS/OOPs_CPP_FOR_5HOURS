 
// Program to demonstrate parameterized constructor

#include <iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    Student(int r, float m)   // parameterized constructor
    {
        roll = r;
        marks = m;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s1(101, 88.5);   // constructor called with arguments
    s1.display();

    return 0;
}