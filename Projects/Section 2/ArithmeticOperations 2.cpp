// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Function to sum two integers
int sum(int a, int b)
{
    // Add the two integer inputs and return the result
    return (a + b);
}

// Function to sum two doubles
double sum(double a, double b)
{
    // Add the two double inputs and return the result
    return (a + b);
}

// Main function where program execution begins
int main()
{
    // Call the sum function with integer arguments
    cout << sum(10, 20) << '\n';
    
    // Call the sum function with double arguments
    cout << sum(1.0, 1.5) << '\n';
    
    return 0;  // Return 0 indicating successful program execution
}
