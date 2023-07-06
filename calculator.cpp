// Including the header file "calc.h" which contains the class definition.
#include "calculator.h"

// Definition of member function setTheValueA()
// Sets the value of 'a' to the provided integer value.
void mycalc::setTheValueA(int value)
{
    a = value;
}

// Definition of member function setTheValueB()
// Sets the value of 'b' to the provided integer value.
void mycalc::setTheValueB(int value)
{
    b = value;
}

// Definition of member function getTheValueA()
// Returns the value of 'a'.
int mycalc::getTheValueA()
{
    return a;
}

// Definition of member function getTheValueB()
// Returns the value of 'b'.
int mycalc::getTheValueB()
{
    return b;
}

// Definition of member function add()
// Takes two integer parameters 'a' and 'b', and returns their sum.
int mycalc::add(int a, int b)
{
    return a + b;
};

// Definition of member function subtract()
// Takes two integer parameters 'a' and 'b', and returns the difference between 'a' and 'b'.
int mycalc::subtract(int a, int b)
{
    return a - b;
}

// Definition of member function divide()
// Takes two integer parameters 'a' and 'b', and returns the division of 'a' by 'b'.
int mycalc::divide(int a, int b)
{
    return a / b;
}

// Definition of member function multiply()
// Takes two integer parameters 'a' and 'b', and returns their multiplication.
int mycalc::multiply(int a, int b)
{
    return a * b;
}