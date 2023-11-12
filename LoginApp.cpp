#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;

void printFiller(int messageLength, char symbol)
{
    // for (int i = 0; i < messageLength; i++)
    // {
    //     std::cout << "*";
    // }
    std::cout << symbol << std::setfill(symbol) << std::setw(messageLength - 1) << symbol;
}
void printing(std::string message)
{
    char symbol = '*';
    printFiller(message.length(), symbol);
    std::cout << '\n';

    std::cout << message << '\n';

    printFiller(message.length(), symbol);
    std::cout << '\n';
}

int main()
{

    std::string input;
    bool exit = false;
    int action;
    std::string userName;
    std::string userPass;

    std::vector<std::vector<std::string>> users;
    std::vector<std::string> userData;

    // cout << "*********************************************\n";
    // cout << "Welcome! Would you like to login or register?\n";
    // cout << "*********************************************\n";
    printing("Welcome! Would you like to login or register?");

    do
    {
        cout << "1.Register.\n";
        cout << "2.Log in.\n";
        cout << "3.Exit.\n";
        cout << "Choose an Option! ";
        cin >> input;

        std::stringstream ss(input);

        if (ss >> action)
        {
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
                // cout << "*****************\n";
                // cout << "New user created!\n";
                // cout << "*****************\n";
                printing("New user created!");
            }
            else if (action == 2)
            {
                /* Log in */
                std::string username;
                std::string password;
                bool userFound = false;
                int tries = 5;

                cout << "Enter your username: ";
                cin >> username;
                for (int i = 0; i < users.size(); i++)
                {
                    if (username == users.at(i).at(0))
                    {
                        userFound = true;
                        do
                        {
                            cout << "Tries left: " << tries << '\n';
                            cout << "Enter your password: ";
                            cin >> password;
                            if (password == users.at(i).at(1))
                            {
                                // cout << "You've logged in successfully!";
                                printing("You've logged in successfully!");
                                return 0;
                            }
                            else
                            {
                                // cout << "Wrong password! Try again!\n";
                                tries--;
                                if (tries > 0)
                                {
                                    printing("Wrong password! Try again!");
                                }
                                else
                                {
                                    printing("Wrong password! You have run out of tries. You have to start over or register a new user!");
                                    break;
                                }
                            }
                        } while (password != users.at(i).at(1));
                    }
                }

                if (!userFound)
                {
                    // cout << "No such user was found! Try again or register a new user!\n";
                    printing("No such user was found! Try again or register a new user!");
                }
            }
            else if (action == 3)
            {
                exit = true;
            }
            else
            {
                printing("Wrong Input! Choose again!");
            }
        }
        else
        {
            // cout << "**************************\n";
            // cout << "Wrong Input! Choose again!\n";
            // cout << "**************************\n";
            printing("Wrong Input! Choose again!");
        }

    } while (!exit);
    // cout << "Have a nice day!";
    printing("Have a nice day!");

    return 0;
}