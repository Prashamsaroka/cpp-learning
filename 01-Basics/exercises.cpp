#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    string faculty;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your faculty: ";
    getline(cin, faculty);

    cout << "\n----- Student Information -----\n";
    cout << "Name      : " << name << endl;
    cout << "Age       : " << age << endl;
    cout << "Faculty   : " << faculty << endl;
    cout << "University: Tribhuvan University" << endl;

    return 0;
}