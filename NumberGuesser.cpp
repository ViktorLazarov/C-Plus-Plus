#include <iostream>
#include <ctime>

using namespace std;
int main()
{

    int num, guess, tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "***** NUMBER GUESSING GAME *****\n";
    do
    {
        cout << "Enter your guess!: ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too High!\n";
        }
        else if (guess < num)
        {
            cout << "Too Low!\n";
        }
        else
        {
            cout << "Correct! # of tries: " << tries << '\n';
        }

    } while (guess != num);

    cout << "********************************";
    return 0;
}