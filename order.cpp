#include <iostream>

using namespace std;
void getInput(string &product, int &quantity);
void calculate(double &price, string product, int quantity);
void print(double orderPrice);

int main()
{

    string product;
    int quantity;
    double orderTotal = 0;

    getInput(product, quantity);
    calculate(orderTotal, product, quantity);
    print(orderTotal);

    return 0;
}

void getInput(string &product, int &quantity)
{
    cout << "Enter product: ";
    cin >> product;
    cout << "Enter quantity: ";
    cin >> quantity;
}
void calculate(double &total, string product, int quantity)
{
    double productPrice = 0;
    bool validInput = false;

    while (!validInput)
    {
        if (product == "caffee")
        {
            productPrice = 2.50;
            validInput = true;
        }
        else if (product == "water")
        {
            productPrice = 1.50;
            validInput = true;
        }
        else if (product == "juice")
        {
            productPrice = 1.90;
            validInput = true;
        }
        else if (product == "coke")
        {
            productPrice = 3.50;
            validInput = true;
        }
        else
        {
            cout << "Enter a valid product\n";
            // ask for the user input again
            getInput(product, quantity);
        }
    }

    total = productPrice * quantity;
}

void print(double orderTotal)
{

    cout << orderTotal;
}