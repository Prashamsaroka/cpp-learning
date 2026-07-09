#include <iostream>
using namespace std;
void inputMarks(int marks[], string subjects[], int n);
void displayReport(int marks[], string subjects[], int n);
int calculateTotal(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
void inputMarks(int marks[], string subjects[], int n)
{
    for (int i = 0; i < n; i++)
    {
        getline(cin, subjects[i]);
        cout << subjects[i]<<" : ";
        cin >> marks[i];
        cin.ignore();
    }
}
void displayReport(int marks[], string subjects[], int n)
{
    
    cout << "Subject\tMarks\n";
    for (int i = 0; i < n; i++)
    {
        cout << subjects[i] << "\t:" << marks[i] << "\n";
    }
}
int calculateTotal(int marks[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }
    return total;
}
int findHighest(int marks[], int n)
{
    int highest = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}
int findLowest(int marks[], int n)
{
    int lowest = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    return lowest;
}
int main()
{
    string str, subjects[20];
    int marks[20], total, highest, lowest;
    float average;
    cout << "===== STUDENT RESULT MANAGEMENT SYSTEM =====\n";
    cout << "Enter student's full name:";
    getline(cin, str);
    cout << "Enter number of subjects:";
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character left by cin
    cout << "Enter subject names and marks:\n";
    inputMarks(marks, subjects, n);
    cout << "===== STUDENT REPORT =====\n";
    cout << "Student Name: " << str << "\n";
    displayReport(marks, subjects, n);
    total = calculateTotal(marks, n);
    average = (float)total / n;
    highest = findHighest(marks, n);
    lowest = findLowest(marks, n);
    
    cout << "Total      : " << total << "\n";
    cout << "Average    : " << average << "\n";
    cout << "Highest    : " << highest << "\n";
    cout << "Lowest     : " << lowest << "\n";
    cout<<"Result     : ";
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 40)
        {
            flag = 0;
        }

    }
    if (flag == 1)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    int x = (int)average / 10;
    switch (x)
    {
    case 10:
    case 9:
        cout << "Grade     : A+" << endl;
        break;
    case 8:
        cout << "Grade     : A" << endl;
        break;
    case 7:
        cout << "Grade     : B+" << endl;
        break;
    case 6:
        cout << "Grade     : B" << endl;
        break;
    case 5:
        cout << "Grade     : C" << endl;
        break;
    case 4:
        cout << "Grade     : D" << endl;
        break;
    default:
        cout << "Grade     : F" << endl;
    }
    return 0;
}