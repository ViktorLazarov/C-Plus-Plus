#include <iostream>
#include <array>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 4, 3, 7, 9};

    int itemsInArr = sizeof(arr) / sizeof(int);

    std::cout << itemsInArr;

    return 0;
}