#include <iostream>
#include <cmath>
#include <string>
#include <cassert>  // Include the cassert library for assertion macros

using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    double x = -2.0;  // Initialize variable x with value -2.0

    if (x < 0.0)  // Check if x is less than 0
    {
        x = 0.0;  // If true, set x to 0
    }
    cout << x << "\n";  // Print the final value of x

    int i = 0;  // Initialize variable i to 0

    double y;  // Declare variable y

    if (i > 100)  // Check if i is greater than 100
    {
        y = 2.0;  // If true, set y to 2.0
    }
    else if (i < 0)  // Check if i is less than 0
    {
        y = 10.0;  // If true, set y to 10.0
    }
    else  // If none of the above conditions are met
    {
        y = 5.0;  // Set y to 5.0
    }

    cout << y << "\n" << i << "\n";  // Print y and i

    bool flag = true;  // Declare and initialize boolean flag

    if (flag)  // Check if flag is true
    {
        std::cout << "This will be printed\n";
    }
    else  // If flag is false
    {
        std::cout << "This won't be printed\n";
    }

    // != (not equal) and ! (logical negation) operators are mentioned but not used in this code

    return 0;  // Indicate successful program execution
}
