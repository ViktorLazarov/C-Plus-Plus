#include <iostream>

using namespace std;
int main(){

    // implicit

    // double x = (int) 3.14; // x = 3;

    // explicit

    // char x = 100;  // x = 'd';

    // cout << (char) 100; // 'd';

    int correct = 8;
    double questions = 10.0;
    double score = correct/questions * 100;

    cout << score << " %";
    return 0;
}