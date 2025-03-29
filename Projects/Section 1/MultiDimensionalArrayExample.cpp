#include <iostream>
#include <cmath>  // Include the cmath library for mathematical functions

using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    int array1[2];  // Declare a one-dimensional integer array with 2 elements
    
    double array2[2][3];  // Declare a two-dimensional double array with 2 rows and 3 columns
    
    array2[0][1] = 3;  // Assign value 3 to the element at row 0, column 1 of array2
    
    cout << array2[0][1] << "\n";  // Output the value stored at array2[0][1]
    
    double array3[3] = {5.0, 1.0, 2.0};  // Initialize array3 with 3 elements using initializer list
    
    int array4[2][3] = { {1, 6, -4}, {2, 2, 2} };  // Initialize array4 as a 2x3 matrix
}
