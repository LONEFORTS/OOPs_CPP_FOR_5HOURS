Display student's data using array of objects

#include <iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];
    int marks[3];
    int total;

public:
    void accept()
    {
        total = 0;
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter marks of 3 subjects:\n";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void display()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << "\nTotal: " << total << endl;
    }
};

int main()
{
    Student s[3];   // array of objects

    cout << "Enter student details:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].accept();
    }

    cout << "\nDisplaying student details:\n";
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
        cout << "------------------";
    }

    return 0;
}