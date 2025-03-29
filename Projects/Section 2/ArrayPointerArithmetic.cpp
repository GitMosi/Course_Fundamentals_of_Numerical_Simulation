// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main()
{
    // Declare and initialize an array of 5 integers
    int numbers[5] = {0};
    
    // Declare a pointer of type int
    int * p;
    
    // Assign the address of the beginning of the array to p
    p = numbers;
    
    // Set the first element of the array to 10
    *p = 10;
    
    // Move the pointer to the next element and set it to 20
    p++;
    *p = 20;
    
    // Move the pointer to the third element and set it to 30
    p = &numbers[2];
    *p = 30;
    
    // Move the pointer to the fourth element and set it to 40
    p = numbers + 3;
    *p = 40;
    
    // Move the pointer back to the beginning and set the last element to 50
    p = numbers;
    *(p+4) = 50;
    
    // Print all elements of the array
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";
    
    return 0;  // Return 0 indicating successful program execution
}
