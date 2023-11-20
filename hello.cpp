#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
string test();
int main()
{

    std::cout << "Hello World!\n";
   
    cout << test();
}

string test()
{
    cout << 1 << '\n';
    cout << 2 << '\n';
    cout << 3 << '\n';
    return "Hello";
    cout << 4 << '\n';
    cout << 5 << '\n';
    cout << 6 << '\n';
}