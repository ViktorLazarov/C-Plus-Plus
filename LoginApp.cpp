#include <iostream>
#include <vector>

using std::cin;
using std::cout;

int main()
{

    int action;
    bool exit = false;

    std::string userName;
    std::string userPass;

    std::vector<std::vector<std::string>> users;
    std::vector<std::string> userData;

    cout << "*********************************************\n";
    cout << "Welcome! Would you like to login or register?\n";
    cout << "*********************************************\n";

    do
    {
        cout << "1.Register.\n";
        cout << "2.Log in.\n";
        cout << "3.Exit.\n";
        cout << "Choose an Option! ";
        cin >> action;

        if (action == 1)
        {
            /* Register */
            cout << "Enter new username: ";
            cin >> userName;
            cout << "Enter a password: ";
            cin >> userPass;

            userData.push_back(userName);
            userData.push_back(userPass);
            users.push_back(userData);
            userData.clear();
            cout << "*****************\n";
            cout << "New user created!\n";
            cout << "*****************\n";
        }
        else if (action == 2)
        {
            /* Log in */
            std::string username;
            std::string password;
            bool userFound = false;

            cout << "Enter your username: ";
            cin >> username;
            for (int i = 0; i < users.size(); i++)
            {
                if (username == users.at(i).at(0))
                {
                    userFound = true;
                    do
                    {
                        cout << "Enter your password: ";
                        cin >> password;
                        if (password == users.at(i).at(1))
                        {
                            cout << "You've logged in successfully!";
                            return 0;
                        }
                        else
                        {
                            cout << "Wrong password! Try again!\n";
                        }
                    } while (password != users.at(i).at(1));
                }
            }

            if (!userFound)
            {
                cout << "No such user was found! Try again or register a new user!\n";
            }
        }
        else if (action == 3)
        {
            exit = true;
        }
        else
        {
            cout << "**************************\n";
            cout << "Wrong Input! Choose again!\n";
            cout << "**************************\n";
        }

    } while (!exit);
    cout << "Have a nice day!";

    return 0;
}