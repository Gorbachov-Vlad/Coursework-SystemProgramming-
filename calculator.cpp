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
class Calculator {
public:
    // Існуючі функції...
    
    float Add(float a, float b) {
        return a + b;
    }

    float Multiply(float a, float b) {
        return a * b;
    }

    // Додаємо нову функцію для обчислення квадрату числа
    float Square(float number) {
        return number * number;
    }
};
