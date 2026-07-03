#include <iostream>
using namespace std;

int main()
{
    // Single-line comment

    /* Multi-line
       comment */

    // Variables
    int age = 18;
    float cgpa = 3.85;
    char grade = 'A';
    bool isStudent = true;
    string name = "Prashamsa Roka";

    // Constant
    const string university = "Tribhuvan University";

    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "CGPA       : " << cgpa << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Student    : " << (isStudent ? "Yes" : "No") << endl;
    cout << "University : " << university << endl;

    return 0;
}