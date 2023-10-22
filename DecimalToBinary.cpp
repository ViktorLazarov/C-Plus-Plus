#include <iostream>
#include <cmath>

using namespace std;
    int input;
    string binary;

void getInput(){
    cout << "Enter a decimal number!: ";
    cin >> input;
}

void calculate(){
    while (input > 0)
    {
        binary.insert(0, to_string(input % 2));
        input /= 2;
    }
    cout << binary;
}

int main()
{
    getInput();
    calculate();

    return 0;
}