#include <iostream>
#include <cmath>
using namespace std;

// Function prototype declaration
double CalculateMinimum(double a, double b);

int main(int argc, char * argv[])
{
    // Declare variables
    double x = 4.0, y = -8.0;
    
    // Call the function to get the minimum value
    double minimum_value = CalculateMinimum(x, y);
    
    // Print the result
    std::cout << "The minimum of " << x << " and " << y
              << " is " << minimum_value << "\n";
    
    return 0;
}

// Function definition
double CalculateMinimum(double a, double b)
{
    // Return the smaller of a and b
    return a < b ? a : b;
}
