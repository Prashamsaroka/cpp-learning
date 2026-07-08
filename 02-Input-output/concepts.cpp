#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main ()
{
    int number;
    string name;
    //example for output
    cout<<"Enter number:";
    //example for input
    cin>>number;
    cin.ignore();
    //example for getline
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Number is "<<number<<"\n Name is "<<name<<endl;
    cout<<"Number is "<<number<<"\t Name is "<<name<<endl;
}