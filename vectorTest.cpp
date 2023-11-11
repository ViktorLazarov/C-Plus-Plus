#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<vector<string>> userDetails;

    vector<string> nameAndPass;

    while (true)
    {
        string name;
        string pass;

        cout << "Enter Name: \n";
        cin >> name;
        if (name == "exit")
        {
            break;
        }
        cout << "Enter Pass: \n";
        cin >> pass;

        nameAndPass.push_back(name);
        nameAndPass.push_back(pass);

        userDetails.push_back(nameAndPass);
        nameAndPass.clear();
        }

    cout << "Name: " << userDetails.at(1).at(0) << endl;
    cout << "Pass: " << userDetails.at(1).at(1) << endl;

    return 0;
}
