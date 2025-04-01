#include <iostream>

// Create a program that swaps two numbers without using a third variable.

int main()
{
    int num1;
    int num2;

    std::cout << "Please enter the first number: ";
    std::cin >> num1;

    std::cout << "Please enter the second number: ";
    std::cin >> num2;

    std::cout << "Numbers before process: " << num1 << " & " << num2 << '\n';
    std::cout << '\n';

    (num1 += num2);
    (num2 = num1 - num2);
    (num1 -= num2);

    std::cout << "Numbers after process: " << num1 << " & " << num2 << '\n';

    return 0;
}