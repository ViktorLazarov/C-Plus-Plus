#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

// using namespace std;

void showBalance(double balance)
{
    std::cout << "***********************************\n";
    std::cout << "Your balance is: €" << std::setprecision(2) << std::fixed << balance << '\n';
    std::cout << "***********************************\n";
}

double depositAmountFunc()
{
    double deposit;
    double depositedAmount;
    std::string input;

    std::cout << "Enter amount to deposit: ";
    std::cin >> input;

    std::stringstream ss(input);

    if (ss >> deposit)
    {
        if (deposit > 0)
        {
            depositedAmount = deposit;
            std::cout << "***********************************\n";
            std::cout << "Deposited amount: " << deposit << '\n';
            std::cout << "***********************************\n";
        }
        else
        {
            std::cout << "*******************************************************" << '\n';
            std::cout << "Invalid Amount. Please enter a valid amount to deposit." << '\n';
            std::cout << "*******************************************************" << '\n';
        }
    }
    else
    {
        std::cout << "*******************************************" << '\n';
        std::cout << "Invalid input. Please enter a valid number." << '\n';
        std::cout << "*******************************************" << '\n';
    }

    return depositedAmount;
}

double withdraw(double balance)
{

    double withdraw;
    double withdrawAmount;

    std::string input;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> input;

    std::stringstream ss(input);

    if (ss >> withdraw)
    {
        if (withdraw < 0 || withdraw > balance)
        {
            std::cout << "*******************************************************" << '\n';
            std::cout << "Invalid Amount. Please enter a valid amount to withdraw." << '\n';
            std::cout << "*******************************************************" << '\n';
        }
        else
        {
            withdrawAmount = withdraw;
            std::cout << "***********************************\n";
            std::cout << "Withdraw amount: " << withdraw << '\n';
            std::cout << "***********************************\n";
        }
    }
    else
    {
        std::cout << "*******************************************" << '\n';
        std::cout << "Invalid input. Please enter a valid number." << '\n';
        std::cout << "*******************************************" << '\n';
    }

    return withdrawAmount;
}

int main()
{

    std::cout << "***********************************\n";
    std::cout << "************BANKING APP************\n";
    std::cout << "***********************************\n";

    std::string input;
    double balance = 0;
    int action;

    do
    {
        std::cout << "1.Show Balance\n";
        std::cout << "2.Deposit\n";
        std::cout << "3.Withdraw\n";
        std::cout << "4.Exit\n";
        std::cout << "Please choose an option:";
        std::cin >> input;

        std::stringstream ss(input);

        if (ss >> action)
        {
            if (action < 1 || action > 4)
            {
                std::cout << "***********************************\n";
                std::cout << "Invalid input. Please choose again!\n";
                std::cout << "***********************************\n";
                continue;
            }

            switch (action)
            {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += depositAmountFunc();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "*************************************\n";
                std::cout << "Thanks for visiting! Have a nice day!\n";
                std::cout << "*************************************\n";
                break;
            }
        }
        else
        {
            std::cout << "***********************************\n";
            std::cout << "Invalid input. Please choose again!\n";
            std::cout << "***********************************\n";
        }

    } while (action != 4);

    return 0;
}