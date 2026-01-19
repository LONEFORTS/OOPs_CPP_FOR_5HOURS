
// Program to store and display data of five books using class

#include <iostream>
using namespace std;

class Book
{
    char title[30];
    char author[30];

public:
    void accept()
    {
        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;
    }

    void display()
    {
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author << endl;
    }
};

int main()
{
    Book b[5];

    cout << "Enter details of 5 books:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        b[i].accept();
    }

    cout << "\nDisplaying Book Information:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nBook " << i + 1;
        b[i].display();
    }

    return 0;
}