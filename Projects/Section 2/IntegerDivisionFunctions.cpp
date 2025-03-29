// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Function to divide two integers
int divide(int a, int b = 2)
{
    // Perform division operation
    int r = a / b;
    return r;
}

// Main function where program execution begins
int main()
{
    // Call the divide function with only one argument (using default value)
    cout << divide(12) << '\n';

    // Call the divide function with both arguments explicitly
    cout << divide(20, 4) << '\n';

    return 0;  // Return 0 indicating successful program execution
}
