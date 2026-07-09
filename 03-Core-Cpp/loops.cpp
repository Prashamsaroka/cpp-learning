#include <iostream>
using namespace std;

int main()
{
    cout<<"===== LOOP DEMO =====\n";
    cout<<"1. Print numbers from 1 to N \n";
    cout<<"2. Countdown from N to 1 \n";
    cout<<"3. Repeat until user enters 0 \n";
    cout<<"4. Exit\n";
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)
    {
        case 1:
        {
            cout << "1. Print numbers from 1 to N" << endl;
            cout<<"Enter how many numbers you want to print:";
            int i,number;
            cin >> number;
            for (int i = 1; i <= number; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "Countdown from N to 1 " << endl;
            int num,count=0;
            cout<<"Enter a number:";
            cin >> num;
            while(num!=0)
            {
                cout << num << "\n";
                count++;
                num--;
            }
            cout << "Count: " << count << endl;
            break;
        }
        case 3:
        {
            cout << "Repeat until user enters 0" << endl;
            int number;
            cout<<"Enter number:";
            cin >> number;
            do
            {
                cout << "You entered: " << number << endl;
                cout<<"Enter number:";
                cin >> number;
            } while (number != 0);
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