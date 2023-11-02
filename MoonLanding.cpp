#include <iostream>

int main()
{

    double height = 150;
    double speed = 10;
    const double GRAVITY = 1.6;
    const double TIME = 0.1;
    double fuel = 200;
    int input = 8;

    double acceleration = GRAVITY * TIME;

    while (height > 0)
    {
        height = height - speed;
        speed = speed + acceleration;

        fuel = fuel - input;
        speed = speed - input / 10.0;

        std::cout << "Height: " << height << " Speed: " << speed << " Fuel: " << fuel << '\n';
    }

    return 0;
}