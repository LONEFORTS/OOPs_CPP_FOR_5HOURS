#include <iostream>
using namespace std;

class ReportCard
{
public:
    int roll;
    char name[30];
    int marks[5];
    int total;
    float average;

    void inputData()
    {
        total = 0;

        cout << "\nEnter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        // Input marks of subjects
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        average = (float)total / 5;
    }

    void showReport()
    {
        cout << "\n--- Report Card ---";
        cout << "\nRoll Number : " << roll;
        cout << "\nName        : " << name;
        cout << "\nTotal Marks : " << total;
        cout << "\nAverage     : " << average;

        if (average >= 40)
            cout << "\nResult      : Pass";
        else
            cout << "\nResult      : Fail";
    }
};

int main()
{
    ReportCard r;
    int choice;

    do
    {
        cout << "\n\n1. Enter Student Data";
        cout << "\n2. Display Report Card";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                r.inputData();
                break;

            case 2:
                r.showReport();
                break;

            case 3:
                cout << "\nProgram Ended";
                break;

            default:
                cout << "\nInvalid Choice";
        }
    } while (choice != 3);

    return 0;
}