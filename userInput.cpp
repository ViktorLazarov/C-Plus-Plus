#include <iostream>

using namespace std;
int main() {

    string name;
    int age;

    cout << "What's your age?: ";
    cin >> age;


    cout << "What's your name?: ";
    getline(cin >> ws, name);

    cout << "Hello " << name << ". You age is " << age << ".";

    return 0;
}