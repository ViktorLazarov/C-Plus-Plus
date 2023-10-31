#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance)
{
    cout << "***********************************\n";
    cout << "Your balance is: €" << setprecision(2) << fixed << balance << '\n';
    cout << "***********************************\n";
}

double depositAmountFunc()
{
    double deposit;
    cout << "Enter amount to deposit: ";
    cin >> deposit;

    return 0;
}

int main()
{

    cout << "***********************************\n";
    cout << "************BANKING APP************\n";
    cout << "***********************************\n";

    double balance = 0;
    double withdrawAmount = 0;

    int action;

    do
    {
        cout << "1.Show Balance\n";
        cout << "2.Deposit\n";
        cout << "3.Withdraw\n";
        cout << "4.Exit\n";
        cout << "Please choose an option:";
        cin >> action;

        switch (action)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += depositAmountFunc();
            break;
        case 3:
            break;
        case 4:
            cout << "Thanks for visiting! Have a nice day!";
            break;

        default:
            cout << "Invalid input. Please try again!\n";
            break;
        }

    } while (action != 4);

    return 0;
}