#include <iostream>
using namespace std;

class Student
{
public:
    // Array to store marks of subjects
    int marks[5];
    int total = 0;
    float average;

    void getMarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate()
    {
        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }
        average = (float)total / 5;
    }

    void display()
    {
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main()
{
    // Object of Student class
    Student s1;

    s1.getMarks();
    s1.calculate();
    s1.display();

    return 0;
}