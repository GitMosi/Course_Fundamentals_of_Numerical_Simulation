// Include necessary headers
#include <iostream>
using namespace std;

// Define a class named Rectangle
class Rectangle {
    // Private members (not accessible outside the class)
    int width, height;
    
    // Public members (accessible outside the class)
  public:
    // Method to set the dimensions of the rectangle
    void set_values (int, int);
    
    // Method to calculate the area of the rectangle
    int area (void);
} rect, rectb;

// Function definition for set_values
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  // Create two instances of the Rectangle class
  Rectangle rect, rectb;
  
  // Set dimensions for rect
  rect.set_values (3, 4);
  
  // Set dimensions for rectb
  rectb.set_values (5, 6);
  
  // Print area of rect
  cout << "rect area: " << rect.area() << endl;
  
  // Print area of rectb
  cout << "rectb area: " << rectb.area() << endl;
  
  return 0;
}
