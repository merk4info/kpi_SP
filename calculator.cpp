#include "calculator.h"

int Calculator::Addition (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Subtraction (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Multiplication (double a, double b)
{
    return a * b + 0.5;
}


