#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// Додаємо нову функцію для обчислення квадрату числа
float Square(float number) 
{
     return number * number;
}

float Calculator::Divide(float a, float b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

float Calculator::SquareRoot(float number) {
    if (number < 0) {
        throw std::invalid_argument("Cannot calculate the square root of a negative number.");
    }
    return sqrt(number);
}

float Calculator::Power(float base, int exponent) {
    float result = 1;
    for (int i = 0; i < abs(exponent); i++) {
        result *= base;
    }
    return (exponent < 0) ? (1 / result) : result;
}

float Calculator::Percentage(float total, float percent) {
    return (total * percent) / 100;
}


