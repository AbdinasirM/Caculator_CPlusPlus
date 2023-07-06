#ifndef CALCULATOR_H
#define CALCULATOR_H

// Declaration of the class 'mycalc'
class mycalc
{
private:
    int a; // Private member variable 'a'
    int b; // Private member variable 'b'

public:
    // Function declarations
    int add(int, int);      // Adds two integers and returns the result
    int multiply(int, int); // Multiplies two integers and returns the result
    int divide(int, int);   // Divides the first integer by the second integer and returns the result
    int subtract(int, int); // Subtracts the second integer from the first integer and returns the result

    void setTheValueA(int); // Sets the value of 'a' to the provided integer value
    void setTheValueB(int); // Sets the value of 'b' to the provided integer value

    int getTheValueA(); // Returns the value of 'a'
    int getTheValueB(); // Returns the value of 'b'
};

#endif
