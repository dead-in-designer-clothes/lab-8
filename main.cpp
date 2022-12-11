#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    double a{ 3 }, b{ 7 }, x{ 2 }, y{ 5 };
    double current{ a + x / y + b };
    while (y + b < 1000000)
    {
        current = (a + x) / (y + b);
        if (current < a / b)
        {
            x += a; y += b;
        }
    }       
    std::cout << x << std::endl;
    std::cout << "------" << std::endl;
    std::cout << y << std::endl;
    return 0;
}
