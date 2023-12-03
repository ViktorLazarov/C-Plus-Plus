#include <iostream>

using namespace std;
void fillMap(char array[][9]);
void printMap(char array[][9]);
int main()
{

    int mapX = 7;
    int mapY = 9;

    char map[7][9];

    fillMap(map);
    printMap(map);

    return 0;
}

void fillMap(char array[][9])
{

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            array[i][j] = '-';
        }
    }
}

void printMap(char array[][9])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << array[i][j];
        }
        cout << '\n';
    }
}