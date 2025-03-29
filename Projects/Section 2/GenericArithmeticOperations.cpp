// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Function template for summing two values of any type T
template <class T>
T sum(T a, T b)
{
    // Declare a variable of type T to store the result
    T result;
    
    // Add the two input values and store the result
    result = a + b;
    
    // Return the result
    return result;
}

// Main function where program execution begins
int main()
{
    // Declare and initialize integer variables
    int i = 5, j = 6;
    
    // Declare and initialize double variables
    double f = 2.0, g = 0.5;
    
    // Call the sum function with integer arguments
    int k = sum<int>(i, j);
    
    // Call the sum function with double arguments
    double h = sum<double>(f, g);
    
    // Print the results
    cout << "Sum of integers: " << k << '\n';
    cout << "Sum of doubles: " << h << '\n';
    
    return 0;  // Return 0 indicating successful program execution
}
