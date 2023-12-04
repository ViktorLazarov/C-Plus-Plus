#include <iostream>

void fill(int array[], int size);
void changeInt(int &x, int &y);

int main()
{
    // passing an array as an argument
    int arr[5];

    // fill(arr, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << arr[i] << '\n';
    // }
    std::cout << "***********************************" << '\n';
    // passing ints by reference
    int x = 9;
    int y = 7;
    // changeInt(x, y);
    std::cout << x << '\n';
    std::cout << y << '\n';

    std::string map(x * y, '-');
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << map[j];
        }
        std::cout << '\n';
    }
    map[23] = 'A';

    std::cout << map;

    return 0;
}

void fill(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        array[i] = i + 10;
    }
}

void changeInt(int &x, int &y)
{
    x = x * 2;
    y = y * 3;
}