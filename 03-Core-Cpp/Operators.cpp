#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "----- Arithmetic -----\n";
    cout << "Addition  : " << a + b << endl;
    cout << "Subtraction : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division : " << a / b << endl;
    cout << "Modulus : " << a % b << endl;
    cout << boolalpha;
    cout << "\n----- Relational -----\n";
    bool isGreater  = (a > b);
    cout <<" (a > b) : " << isGreater << endl;

    cout << "\n----- logical -----\n";
    bool logicalResult  = ((a > 10) && (b < 10));
    cout <<" ((a > 10) && (b < 10)) : " << logicalResult  << endl;

    cout << "\n----- Assignment -----\n";
    a += 5;
    cout << "a += 5 : " << a << endl;

    cout << "\n----- Increment  -----\n";
    b--;
    cout << "b-- : " << b << endl;

    return 0;
}