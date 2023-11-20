#include <iostream>
#include <array>

int main()
{
    int arr[6];
    

    int itemsInArr = sizeof(arr) / sizeof(arr[0]);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 0; i < itemsInArr; i++)
    {
        
        std::cout << arr[i]<< '\n';
    }
    

    return 0;
}