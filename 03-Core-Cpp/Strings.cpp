#include<iostream>
using namespace std;
int main()
{
    string name;
    int length;
    cout << "===== STRING DEMO =====\n";
    cout << "Enter your full name:";
    getline(cin, name);
    length = name.length();
    cout << "Length     : " << length << endl;
    cout << "Uppercase  : ";
    for (int i = 0; i < length; i++)
    {
        cout << (char)toupper(name[i]);
    }
    cout << endl;
    cout << "Lowercase  : ";
    for (int i = 0; i < length; i++)
    {
        cout << (char)tolower(name[i]);
    }
    cout << endl;
    cout << "first name   : ";
    for (int i = 0; i < length; i++)
    {
        if (name[i] == ' ')
        {
            break;
        }
        cout << name[i];
    }
    cout << endl;
    cout << "last name   : ";
    for (int i = length - 1; i >= 0; i--)
    {
        if (name[i] == ' ')
        {
            for (int j = i+1; j < length; j++)
            {
                cout << name[j];
            }
        }
    }
    cout << endl;
    cout<<"elements of string :";
    for (int i = 0; i < length; i++)
    {
        cout << name[i] << " ";
    }
    return 0;
}