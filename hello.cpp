#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{

    // cout << "Hello World!\n";
    string input;
    cout << "Enter a number\n";
    int result = 0;
    int userNumber;

    while (true)
    {
        cin >> input;
        stringstream ss(input);
        if (ss >> userNumber)
        {

            result += userNumber;
        }
        else
        {
            
            if (input == "=")
            {
                break;
            }
            else {
                cout << "Wrong input!\n";
            }
        }
    }
    cout << result;
    return 0;
}