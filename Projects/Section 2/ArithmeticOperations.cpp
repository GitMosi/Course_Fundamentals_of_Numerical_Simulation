// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Function to multiply two integers
int operate(int a, int b)
{
    // Multiply the two integer inputs and return the result
    return (a * b);
}

// Function to divide two doubles
double operate(double a, double b)
{
    // Divide the two double inputs and return the result
    return (a / b);
}

// Main function where program execution begins
int main()
{
    // Declare and initialize integer variables
    int x = 5, y = 2;
    
    // Declare and initialize double variables
    double n = 5.0, m = 2.0;
    
    // Call the operate function with integer arguments
    cout << operate(x, y) << '\n';
    
    // Call the operate function with double arguments
    cout << operate(n, m) << '\n';
    
    return 0;  // Return 0 indicating successful program execution
}
