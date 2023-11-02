#include <iostream>
#include <iomanip>
#include <string>
// using namespace std;

int main() {
    std::string text = "Willkommen bei Ihrem örtlichen Finanzamt!";
    int length = text.length();
    
    std::cout << "#" << std::setfill('#') << std::setw(length-2) << "#" << std::endl;
    std::cout << text << std::endl;
    std::cout << "Länge der Zeichenkette: " << length << std::endl;
}