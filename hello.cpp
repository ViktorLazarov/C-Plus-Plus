#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    cout << "Hello World!\n";
    string userInput;
    int a;
    getline(cin, userInput);
    if (userInput.empty())
    {
        cout << "User pressed only Enter";
    }
    else
    {
        stringstream ss(userInput);
        if (ss >> a)
        {
            cout << "User entered an integer";
        }
        else
        {
            cout << "user entered something else";
        }
    }
}
