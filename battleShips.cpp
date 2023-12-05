#include <iostream>
#include <vector>

using namespace std;

void fillMap(vector<vector<char>> &array);
void printMap(const vector<vector<char>> &array);

int main() {
    int mapX = 7;
    int mapY = 9;

    vector<vector<char>> map(mapX, vector<char>(mapY));

    fillMap(map);
    printMap(map);

    return 0;
}

void fillMap(vector<vector<char>> &array) {
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[i].size(); j++) {
            array[i][j] = '-';
        }
    }
}

void printMap(const vector<vector<char>> &array) {
    for (const auto &row : array) {
        for (char cell : row) {
            cout << cell;
        }
        cout << '\n';
    }
}
