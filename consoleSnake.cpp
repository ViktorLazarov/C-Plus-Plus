#include <iostream>
#include <unistd.h>
#include <ctime>

using namespace std;

int main()
{
    int height, width;
    cout << "Please specify the dimentions of the map!\n";
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;

    int snakeSize;
    int initialTargets = 0;
    int mapRows = height;
    int mapColums = width;
    int randomNum;
    int targetsNumber = 0;
    int tries = (mapColums * mapRows / 6) + 6;
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
            randomNum = (rand() % 8);
            grid[i][j] = mapBlocks[randomNum];
            if (grid[i][j] == 'F')
            {
                initialTargets++;
            }
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
        snakeSize = initialTargets - targetsNumber;
        if (snakeSize == 0)
        {
            snakeSize = 1;
        }
        
        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout << "Targets left: " << targetsNumber << '\n';
        cout << "Tries left: " << tries << '\n';
        cout << "Snake size: " << snakeSize << '\n';

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
