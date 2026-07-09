#include <iostream>
using namespace std;
void displayGreeting();
void addNumbers(int, int);
int getSquare();
int findMaximum(int, int);
void displayGreeting()
{
    cout << "Hello, welcome to the program!" << endl;
}
void addNumbers(int x, int y)
{
    cout << "Sum: " << x + y << endl;
}
int getSquare()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num * num;
}
int findMaximum(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << "===== FUNCTION DEMO =====\n";
    cout << "1. Greeting \n";
    cout << "2. Addition \n";
    cout << "3. Square \n";
    cout << "4. Maximum of Two Numbers\n";
    cout << "5. Exit\n";
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "1. Greeting" << endl;
        displayGreeting();
        break;
    }
    case 2:
    {
        cout << "2. Addition" << endl;
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        addNumbers(a, b);
        break;
    }
    case 3:
    {
        cout << "3. Square" << endl;
        int square;
        square = getSquare();
        cout << "Square: " << square << endl;
        break;
    }
    case 4:
    {
        cout << "4. Maximum of Two Numbers" << endl;
        int a, b, maxm;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        maxm = findMaximum(a, b);
        cout << "Maximum: " << maxm << endl;
        break;
    }
    case 5:
        cout << "Exiting the program" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
