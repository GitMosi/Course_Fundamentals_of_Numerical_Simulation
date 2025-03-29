// Include the iostream library for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Define a class named Dummy
class Dummy {
  public:
    // Declare a static integer member variable 'n'
    static int n;
    
    // Constructor for the Dummy class
    Dummy () { 
      // Increment the static member variable 'n' each time a new object is created
      n++; 
    };
};

// Initialize the static member variable 'n' to 0 outside the class
int Dummy::n=0;

int main () {
  // Create an object of the Dummy class
  Dummy a;
  
  // Create an array of 5 Dummy objects
  Dummy b[5];
  
  // Output the value of 'n' for object 'a'
  cout << a.n << '\n';
  
  // Dynamically allocate memory for a new Dummy object
  Dummy * c = new Dummy;
  
  // Output the current value of 'n' using the class name
  cout << Dummy::n << '\n';
  
  // Deallocate the dynamically allocated memory
  delete c;
  
  return 0;
}
