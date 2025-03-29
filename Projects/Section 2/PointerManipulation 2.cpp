// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main()
{
    // Declare and initialize integer variables
    int firstvalue = 5, secondvalue = 15;
    
    // Declare two pointer variables of type int
    int * p1, * p2;

    // Store the address of firstvalue in p1
    p1 = &firstvalue;  // p1 = address of firstvalue
    
    // Store the address of secondvalue in p2
    p2 = &secondvalue; // p2 = address of secondvalue
    
    // Change the value pointed to by p1 to 10
    *p1 = 10;          // value pointed to by p1 = 10
    
    // Assign the value pointed to by p1 to p2
    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
    
    // Make p1 point to the same address as p2
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    
    // Change the value pointed to by p1 to 20
    *p1 = 20;          // value pointed to by p1 = 20
    
    // Print the values of firstvalue and secondvalue
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    
    return 0;  // Return 0 indicating successful program execution
}
