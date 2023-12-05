#include <iostream>

using namespace std;

void printMap(string map, int rows, int cols);
void changeElement(string &map, int cols, int userRow, int userCol);
int main()
{
    int rows;
    int cols;

    cout << "Map rows: ";
    cin >> rows;
    cout << "Map cols: ";
    cin >> cols;

    int userRow;
    int userCol;
    cout << "Change an element\n";
    cout << "Row: ";
    cin >> userRow;
    cout << "Col: ";
    cin >> userCol;

    string map(rows * cols, '-');

    changeElement(map, cols, userRow, userCol);
    printMap(map, rows, cols);

        return 0;
}
void changeElement(string &map, int cols, int userRow, int userCol)
{

    map[((userRow - 1) * cols) + (userCol-1)] = 'X';
}

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
