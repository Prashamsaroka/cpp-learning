#include <iostream>
using namespace std;

int main()
{
    cout<<"===== MENU =====\n";
    cout<<"1. Check if a student passed\n";
    cout<<"2. Check if a number is even or odd\n";
    cout<<"3. Find the greatest of two numbers\n";
    cout<<"4. Exit\n";
    int n;
    cout << "Enter your choice: ";
    cin >> n;
    switch(n)
    {
        case 1:
        {
            cout << "Check if a student passed" << endl;
            cout<<"Enter marks of student:";
            int mark;
            cin >> mark;
            if (mark >= 40)
            {
                cout << mark << " student passed" << endl;
            }
            break;
        }
        case 2:
        {
            cout << "Check if a number is even or odd" << endl;
            int num;
            cout<<"Enter a number:";
            cin >> num;
            if (num % 2 == 0)
            {
                cout << num << " is even" << endl;
            }
            else
            {
                cout << num << " is odd" << endl;
            }
            break;
        }
        case 3:
        {
            cout << "Find the greatest of two numbers" << endl;
            int a, b;
            cout<<"Enter two numbers:";
            cin >> a >> b;
            if (a > b)
            {
                cout << a << " is greater than " << b << endl;
            }
            else if (b > a)
            {
                cout << b << " is greater than " << a << endl;
            }
            else
            {
                cout << a << " and " << b << " are equal" << endl;
            }
            break;
        }
        case 4:
            cout << "Exiting the program" << endl; 
            break;
        default:
            cout << "invalid choice" << endl;
            break;
    }

    return 0;
}