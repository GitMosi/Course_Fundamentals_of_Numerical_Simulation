// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Function to duplicate the input values
void duplicate(int& a, int& b, int& c)
{
    // Multiply each input parameter by 2
    a *= 2;
    b *= 2;
    c *= 2;
}

// Main function where program execution begins
int main()
{
    // Declare and initialize variables x, y, z
    int x = 1, y = 3, z = 7;

    // Call the duplicate function with references to x, y, z
    duplicate(x, y, z);

    // Output the modified values of x, y, z
    cout << "x=" << x << ", y=" << y << ", z=" << z;

    return 0;  // Return 0 indicating successful program execution
}
