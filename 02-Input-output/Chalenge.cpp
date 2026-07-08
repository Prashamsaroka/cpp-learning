#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main ()
{
    int age;
    string name;
    char faculty[20],university[20],address[20],phn_number[10];
    cout<<"Enter Full name:";
    getline(cin,name);
    cout<<"Enter age:";
    cin>>age;
    cin.ignore();
    cout<<"Enter faculty:";
    cin.getline(faculty,20);
    cout<<"Enter university:";
    cin.getline(university,20);
    cout<<"Enter address:"; 
    cin.getline(address,20);
    cout<<"Enter phone number:";
    cin.getline(phn_number,10);
    cout<<"--------------------------------"<<endl;
    cout<<"        USER INFORMATION        "<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Full name: "<<name<<endl;
    cout<<"Faculty: "<<faculty<<endl;
    cout<<"University: "<<university<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Phone number: "<<phn_number<<endl;

}