// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main()
{
    // Declare and initialize an integer variable with a value of 10
    int total_sum = 10;
    
    // Print the memory address of total_sum
    cout << &total_sum << "\n";
    
    // Commented out code for dynamic memory allocation
    // double* pX;       // Pointer to store the address of a double
    // int* pI = &total_sum;  // Assigning address of total_sum to pI
    // cout << pI << "\n";
    // *pI = *pI + 10;      // Attempting to modify value through pointer
    
    // Commented out code for dynamic memory allocation
    // double* p_x;       // Pointer to store address of a double
    // p_x = new double;   // Allocating memory for a double
    // *p_x = 1.0;         // Storing 1.0 at the allocated memory location
    // delete p_x;         // Deallocating the memory

    return 0;  // Return 0 indicating successful program execution
}
