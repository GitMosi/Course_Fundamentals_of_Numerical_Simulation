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
} rect;

// Function definition for set_values
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  // Create an instance of the Rectangle class
  Rectangle rect;
  
  // Call the set_values method to set the dimensions
  rect.set_values (3, 4);
  
  // Call the area method to calculate and print the area
  cout << "Area: " << rect.area();
  
  return 0;
}
