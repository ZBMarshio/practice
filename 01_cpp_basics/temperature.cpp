#include <iostream>

double celsius_to_fahrenheit(double celsius)
{
    return celsius * 9.0 / 5.0 + 32.0;
}

int main()
{
    double celsius = 0.0;

    std::cout << "请输入摄氏温度：";

    if (!(std::cin >> celsius))
    {
        std::cout << "输入无效。\n";
        return 1;
    }

    double fahrenheit = celsius_to_fahrenheit(celsius);

    std::cout << celsius << " 摄氏度 = "
              << fahrenheit << " 华氏度\n";

    return 0;
}