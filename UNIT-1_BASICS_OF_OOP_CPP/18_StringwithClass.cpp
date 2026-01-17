#include <iostream>
using namespace std;

class Student
{
public:
    // Character array to store name
    char name[30];
    int roll;

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    // Object of Student class
    Student s1;

    s1.getData();
    s1.display();

    return 0;
}