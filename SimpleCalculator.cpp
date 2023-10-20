#include <iostream>


using namespace std;

int main(){

    double a,b,c;
    char operatorSign;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator sign(+, -, *, /): ";
    cin >> operatorSign;

    cout << "Enter second number: ";
    cin >> b;

    if (operatorSign == '+')
    {
        c = a + b;
    }else if (operatorSign == '-')
    {
        c = a - b;
    }else if (operatorSign == '*')
    {
        c = a * b;
    }else if (operatorSign == '/')
    {
        c = a / b;
    }else {
        cout << "Please enter a valid operation sign!";
    }
    
    cout << "Result is: " << c;

    return 0;
}