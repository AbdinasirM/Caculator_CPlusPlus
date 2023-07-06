#include "calculator.h" // Including the header file "calc.h" which contains the class definition.
#include <iostream>     // Including the iostream library for input/output operations.
using namespace std;

int main()
{
    mycalc calculator; // Creating an instance of the mycalc class.

    int x; // Variable to store the first number.
    int y; // Variable to store the second number.

    cout << "Please enter the first number: " << endl; // Prompting the user to enter the first number.
    cin >> x;                                          // Reading the first number from the user.

    string theOperator;                                                  // Variable to store the operator +, -,* and /
    cout << "Please enter the operator like + or - or * or /: " << endl; // prompting the user to enter the operator
    cin >> theOperator;                                                  // Reading the operator

    cout << "Please enter the second number: " << endl; // Prompting the user to enter the second number.
    cin >> y;                                           // Reading the second number from the user.

    calculator.setTheValueA(x); // Setting the value of 'a' in the calculator object to the first number.
    calculator.setTheValueB(y); // Setting the value of 'b' in the calculator object to the second number.

    int a = calculator.getTheValueA(); // Getting the value of 'a' from the calculator object.
    int b = calculator.getTheValueB(); // Getting the value of 'b' from the calculator object.

    // Check the value of 'theOperator' to determine the desired operation
    if (theOperator == "+")
    {
        // Calculate the addition of 'a' and 'b' using the calculator object
        int addition = calculator.add(a, b);

        // Print the addition result
        cout << "The addition of " << a << " and " << b << " is " << addition << endl;
    }
    else if (theOperator == "-")
    {
        // Calculate the subtraction of 'b' from 'a' using the calculator object
        int subtraction = calculator.subtract(a, b);

        // Print the subtraction result
        cout << "The subtraction of " << a << " and " << b << " is " << subtraction << endl;
    }
    else if (theOperator == "/")
    {
        // Calculate the division of 'a' by 'b' using the calculator object
        int division = calculator.divide(a, b);

        // Print the division result
        cout << "The division of " << a << " and " << b << " is " << division << endl;
    }
    else if (theOperator == "*")
    {
        // Calculate the multiplication of 'a' and 'b' using the calculator object
        int multiplication = calculator.multiply(a, b);

        // Print the multiplication result
        cout << "The multiplication of " << a << " and " << b << " is " << multiplication << endl;
    }
}