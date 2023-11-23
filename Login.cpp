#include <iostream>

using namespace std;

int main()
{
    string userDetails[][2] = {{"Viktor", "password123"},
                               {"Johny", "password234"},
                               {"Yevgen", "password345"}};

    int rows = sizeof(userDetails) / sizeof(userDetails[0]);
    int cols = sizeof(userDetails[0]) / sizeof(userDetails[0][0]);

    string userName = "Johny";
    string userPassword = "password234";

    for (int i = 0; i < rows; i++)
    {
        if (userDetails[i][0] == userName)
        {
            if (userDetails[i][1] == userPassword)
            {
                cout << "Logged in!";
                return 0;
            }
            else
            {
                cout << "Wrong Password!";
                return 0;
            }
        }
        else
        {
            cout << "Wrong User Name!";
        }
    }

    // cout << rows << '\n';
    // cout << cols << '\n';

    return 0;
}