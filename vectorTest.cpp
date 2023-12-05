// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     vector<vector<string>> userDetails;

//     vector<string> nameAndPass;

//     while (true)
//     {
//         string name;
//         string pass;

//         cout << "Enter Name: \n";
//         cin >> name;
//         if (name == "exit")
//         {
//             break;
//         }
//         cout << "Enter Pass: \n";
//         cin >> pass;

//         nameAndPass.push_back(name);
//         nameAndPass.push_back(pass);

//         userDetails.push_back(nameAndPass);
//         nameAndPass.clear();
//         }

//     cout << "Name: " << userDetails.at(1).at(0) << endl;
//     cout << "Pass: " << userDetails.at(1).at(1) << endl;

//     return 0;
// }
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Removing the element at index 2
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 1)
        {
            vec.erase(vec.begin()+i);
        }
        
    }
    

    // Displaying the modified vector
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}