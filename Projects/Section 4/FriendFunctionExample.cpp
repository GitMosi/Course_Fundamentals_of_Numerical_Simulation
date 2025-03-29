// Include necessary libraries
#include <iostream>
using namespace std;

// Define a class named Rectangle
class Rectangle {
    // Private member variables for width and height
    int width, height;
  public:
    // Default constructor
    Rectangle() {}
    
    // Parameterized constructor
    Rectangle(int x, int y) : width(x), height(y) {}
    
    // Method to calculate area
    int area() { return width * height; }
    
    // Declare a friend function
    friend Rectangle duplicate(const Rectangle& param);
};

// Friend function declaration
Rectangle duplicate(const Rectangle& param);

// Friend function implementation
Rectangle duplicate(const Rectangle& param) {
  Rectangle res;
  res.width = param.width * 2;
  res.height = param.height * 2;
  return res;
}

int main() {
  // Create a Rectangle object with default constructor
  Rectangle foo;
  
  // Create a Rectangle object with parameterized constructor
  Rectangle bar(2, 3);
  
  // Use the friend function to create a new Rectangle based on bar
  foo = duplicate(bar);
  
  // Display the area of foo
  cout << foo.area() << '\n';
  
  return 0;
}
