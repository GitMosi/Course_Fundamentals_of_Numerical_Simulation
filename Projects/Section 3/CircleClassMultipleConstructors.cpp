// Include necessary headers
#include <iostream>
using namespace std;

// Define a class named Circle
class Circle {
    // Private member (not accessible outside the class)
    double radius;
    
    // Public members (accessible outside the class)
  public:
    // Constructor declaration taking one double parameter
    Circle(double r);
    
    // Method to calculate the circumference of the circle
    double circum() {return 2*radius*3.14159265;}
};

// Constructor definition for Circle
Circle::Circle(double r) {
  radius = r;
}

int main() {
  // Create a Circle object using functional form initialization
  Circle foo(10.0);
  
  // Create a Circle object using assignment initialization
  Circle bar = 20.0;
  
  // Create a Circle object using uniform initialization
  Circle baz{30.0};
  
  // Create a Circle object using POD-like initialization
  Circle qux = {40.0}; // Note: This syntax is not valid C++ as shown
  
  cout << "foo's circumference: " << foo.circum() << '\n';
  return 0;
}
