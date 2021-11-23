#include <iostream>

using namespace std;

int main()
{
    // set variables to save the user input
    int num1;
    int num2;
    int option;
    int result;

    cout << "Please enter the first number: ";
    cin >> num1;

    
    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please select the operation: ";
    cout << "\n1. Add";
    cout << "\n2. Substract";
    cout << "\n3. Divide";
    cout << "\n4. Mulptiply\n";

    cin >> option;


    if (option == 1)
    {
        /* Addtion */
        result = num1 + num2;
    }
     if (option == 2)
    {
        /* Subtracction */
        result = num1 - num2;
    }

     if (option == 3)
    {
        /* Division */
        result = num1 / num2;
    }
     if (option == 4)
    {
        /* Multiply */
        result = num1 * num2;
    }

    cout << "The result is: " << result;

    return 0;
}