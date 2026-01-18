// Program for arguments passed but no return value

#include <iostream>
using namespace std;

// function declaration
void check_even_odd(int number);

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // function call with argument
    check_even_odd(num);

    return 0;
}

// function definition
void check_even_odd(int number)
{
    if (number % 2 == 0)
        cout << number << " is Even" << endl;
    else
        cout << number << " is Odd" << endl;
}