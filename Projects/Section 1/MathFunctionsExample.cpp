#include <iostream>
#include <cmath>  // Include the cmath library for mathematical functions

using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    int i = 0;  // Initialize integer variable i to 0
    int row = 1, column = 2;  // Initialize variables row and column
    double temperature = 3.0;  // Initialize double variable temperature
    double tolerance = 1.0e-12;  // Initialize double variable tolerance with scientific notation
    double x = 1.0, y = 2.0, z;  // Initialize variables x, y, z
    z = x / y;  // Perform division operation
    cout << z << "\n";  // Output the result of division
    z = sqrt(x);  // Calculate square root of x
    cout << z << "\n";  // Output the square root
    z = exp(y);  // Calculate exponential of y
    cout << z << "\n";  // Output the exponential result
    z = pow(x, y);  // Raise x to the power of y
    cout << z << "\n";  // Output the power result
    z = M_PI;  // Assign value of pi constant
    cout << z << "\n";  // Output the value of pi
    cout << temperature;  // Output the temperature value

    // Additional math functions not shown in the original code:
    // cos, sin, tan, acos, asin, atan, cosh, sinh, tanh, log, log10, ceil, floor

    return 0;  // Indicate successful program execution
}
