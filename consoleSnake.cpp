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

    int snakeSize = 1;

    int mapRows = height;
    int mapColums = width;
    int rowIndex = 0;
    int colIndex = 0;

    int randomNum;

    int initialTargets = 0;
    int currentTargetsNumber;

    int tries = 100; //(mapColums * mapRows / 6) + 6;

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
    // randomly filing the map with blocks
    for (int i = 0; i < mapRows; i++)
    {
        for (int j = 0; j < mapColums; j++)
        {
            randomNum = (rand() % 8);
            grid[i][j] = mapBlocks[randomNum];
        }
    }
    grid[0][0] = player; // initial position of the snake

    // counting the targets at the beginning
    for (int i = 0; i < mapRows; i++)
    {
        for (int j = 0; j < mapColums; j++)
        {
            if (grid[i][j] == 'F')
            {
                initialTargets++;
            }
        }
    }


    while (tries > 0)
    {
        currentTargetsNumber = 0;
        // printing of the map
        for (int i = 0; i < mapRows; i++)
        {
            for (int j = 0; j < mapColums; j++)
            {
                cout << grid[i][j];
            }
            cout << '\n';
        }
        // counting the amount of targets on the map
        for (int i = 0; i < mapRows; i++)
        {
            for (int j = 0; j < mapColums; j++)
            {
                if (grid[i][j] == 'F')
                {
                    currentTargetsNumber++;
                }
            }
        }
        // calculating the size of the snake
        snakeSize = (initialTargets - currentTargetsNumber) + 1;

        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout << "Targets left: " << currentTargetsNumber << '\n';
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
        case 'w':
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
        case 's':
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
        case 'a':
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
        case 'd':
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
