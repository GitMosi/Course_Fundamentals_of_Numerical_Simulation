// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main()
{
    // Declare and initialize integer variables
    int firstvalue, secondvalue;
    
    // Declare a pointer variable of type int
    int * mypointer;

    // Store the address of firstvalue in mypointer
    mypointer = &firstvalue;
    
    // Dereference mypointer and assign the value 10 to the variable it points to
    *mypointer = 10;
    
    // Reassign mypointer to point to secondvalue
    mypointer = &secondvalue;
    
    // Dereference mypointer and assign the value 20 to the variable it now points to
    *mypointer = 20;
    
    // Print the values of firstvalue and secondvalue
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    
    return 0;  // Return 0 indicating successful program execution
}
