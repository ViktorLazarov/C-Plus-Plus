#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    string input;
    cout << "Enter a binary number!";
    cin >> input;
    
    int result = 0;
    int size = input.length();
    int temp;
    int base = 2;
    string character;

    for (int i = 0; i < size; i++)
    {
        temp = 0;
        character = input.at(i);
        temp = stoi(character);
        temp *= pow(base, size - i - 1);
        result += temp;
    }

    cout << result;

    return 0;
}