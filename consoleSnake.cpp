#include <iostream>
#include <unistd.h>
#include <ctime>

using namespace std;

int main()
{
    int mapRows = 5;
    int mapColums = 5;
    int num;
    int targetsNumber = 0;
    int tries = (mapColums*mapRows/6)+6;
    char player = 'X';
    char direction;
    char grid[mapRows][mapColums];
    char mapBlocks[] = {
        '*',
        'F',
        '*',
        '*',
        '*',
        '*',
        '*',
        '*',
    };

    srand(time(NULL));

    for (int i = 0; i < mapRows; i++)
    {
        for (int j = 0; j < mapColums; j++)
        {
            num = (rand() % 8);
            grid[i][j] = mapBlocks[num];
        }
    }
    grid[0][0] = player;

    int rowIndex = 0;
    int colIndex = 0;

    while (tries > 0)
    {
        targetsNumber = 0;
        for (int i = 0; i < mapRows; i++)
        {
            for (int j = 0; j < mapColums; j++)
            {
                cout << grid[i][j];
                if (grid[i][j] == 'F')
                {
                    targetsNumber++;
                }
            }
            cout << '\n';
        }
        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout << "Targets left: " << targetsNumber << '\n';
        cout << "Tries left: " << tries << '\n';


        cout << "Enter direction(u-up, d-down, l-left, r-right, e-end):\n";
        cin >> direction;
        tries--;
        if (direction == 'e')
        {
            break;
        }

        switch (direction)
        {
        case 'u':
            if (rowIndex > 0)
            {
                grid[rowIndex][colIndex] = '*';
                rowIndex--;
                grid[rowIndex][colIndex] = player;
            }
            else if (rowIndex == 0)
            {
                grid[rowIndex][colIndex] = '*';
                rowIndex = mapRows - 1;
                grid[rowIndex][colIndex] = player;
            }
            break;
        case 'd':
            if (rowIndex < mapRows - 1)
            {
                grid[rowIndex][colIndex] = '*';
                rowIndex++;
                grid[rowIndex][colIndex] = player;
            }
            else if (rowIndex == mapRows - 1)
            {
                grid[rowIndex][colIndex] = '*';
                rowIndex = 0;
                grid[rowIndex][colIndex] = player;
            }
            break;
        case 'l':
            if (colIndex > 0)
            {
                grid[rowIndex][colIndex] = '*';
                colIndex--;
                grid[rowIndex][colIndex] = player;
            }
            else if (colIndex == 0)
            {
                grid[rowIndex][colIndex] = '*';
                colIndex = mapColums - 1;
                grid[rowIndex][colIndex] = player;
            }
            break;
        case 'r':
            if (colIndex < mapColums - 1)
            {
                grid[rowIndex][colIndex] = '*';
                colIndex++;
                grid[rowIndex][colIndex] = player;
            }
            else if (colIndex == mapColums - 1)
            {
                grid[rowIndex][colIndex] = '*';
                colIndex = 0;
                grid[rowIndex][colIndex] = player;
            }
            break;
        }
    }
    cout << "Thanks for playing\n";

    return 0;
}
