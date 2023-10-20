#include <iostream>

using namespace std;
int main(){

    // ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2


    int grade = 55;

    // grade > 60 ? cout << "Grade is greater then 60" : cout << "Grade is lower then 60";

    cout << (grade > 60 ? "Grade is greater then 60" : "Grade is lower then 60");


    return 0;
}