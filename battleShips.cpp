#include <iostream>
#include <ctime>

using namespace std;

void printMap(string map, int rows, int cols);
// void changeElement(string &map, int cols, int userRow, int userCol);

int main()
{
    int foundShips = 0;
    int numberOfShips = 4;

    // define dimentions of the map
    int rows;
    int cols;

    cout << "Map rows: ";
    cin >> rows;
    cout << "Map cols: ";
    cin >> cols;

    // create the map
    string map(rows * cols, '-');

    // randomly generate the position of the ships
    int ships[numberOfShips][2];
    
    int shipRow;
    int shipCol;
    srand(time(0));
    for (int i = 0; i < numberOfShips; i++)
    {
        // generate random values for the position of every ship
        shipRow = (rand() % rows) + 1;
        shipCol = (rand() % cols) + 1;
        
    }

    for (int i = 0; i < numberOfShips; i++)
    {
        cout << ships[i][0] << ' ' << ships[i][1] << endl;
    }

    // get user guess
    int userRow;
    int userCol;
    cout << "Guess where the ship is!\n";
    cout << "Row: ";
    cin >> userRow;
    cout << "Col: ";
    cin >> userCol;

    while (foundShips < 4)
    {
        if (foundShips == 4)
        {
            cout << "Congratulations! You have found all the hidden ships!\n";
        }
    }

    // changeElement(map, cols, userRow, userCol);
    printMap(map, rows, cols);

    return 0;
}

// void changeElement(string &map, int cols, int userRow, int userCol)
// {

//     map[((userRow - 1) * cols) + (userCol-1)] = 'X';
// }

void printMap(string map, int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << map[(i * cols) + j];
        }
        cout << '\n';
    }
}
