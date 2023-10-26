#include <iostream>

// void happyBirthday()
// {

//     std::cout << "Happy Birthday to you!\n";
// }

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         happyBirthday();
//     }

//     return 0;
// }

void happyBirthday(std::string name)
{

    std::cout << "Happy Birthday " << name << "!\n";
}

int main()
{
    std::string name = "Viktor";

    for (int i = 0; i < 5; i++)
    {
        happyBirthday(name);
    }

    return 0;
}