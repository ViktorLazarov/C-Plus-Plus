#include <iostream>
#include <cmath>

using namespace std;
string input;
string binary;

void getInput()
{
    cout << "Enter a string to be translated!: ";
    cin >> input;
}

void calculate()
{
    for (int i = 0; i < input.size(); i++)
    {
        char character = input[i];
        cout << character << '\n';
        while (character > 0)
        {
            binary.insert(0, to_string(character % 2));
            character /= 2;
        }
        cout << binary << '\n';
        binary.clear();
    }
}

int main()
{
    getInput();
    calculate();

    return 0;
}