// Include the iostream library for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Define a class named MyClass
class MyClass {
  public:
    // Declare an integer member variable 'x'
    int x;
    
    // Constructor for the MyClass class
    MyClass(int val) : x(val) {}
    
    // Method to get the value of 'x'
    int get() { return x; }
};

// Main function
int main() {
  // Create a const object of MyClass with initial value 10
  const MyClass foo(10);
  
  // Attempting to modify the member variable would result in a compilation error
  // foo.x = 20;            // not valid: x cannot be modified
  
  // Reading the value is allowed and will work as expected
  cout << foo.x << '\n';  // ok: data member x can be read
  
  return 0;
}
