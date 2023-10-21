#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int input;
    string binary;

    cout << "Enter a decimal number!: ";
    cin >> input;

    while (input > 0)
    {
        binary.insert(0, to_string(input % 2));
        input /= 2;
    }
    cout << binary;
    return 0;
}