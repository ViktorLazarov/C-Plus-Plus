#include <iostream>

int calculate(int x, int y, int(*func)(int, int))
{

    int result = func(x, y);
    return result;
}

int add(int x, int y)
{
    return x + y;
}
int substract(int x, int y)
{
    return x - y;
}

int main()
{
    int a = 10;
    int b = 5;

    int result = calculate(a, b, substract);
    std::cout << result;
    
    return 0;
}