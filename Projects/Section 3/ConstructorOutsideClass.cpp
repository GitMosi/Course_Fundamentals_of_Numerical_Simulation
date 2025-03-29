// Include necessary headers
#include <iostream>
using namespace std;

// Define a class named Rectangle
class Rectangle {
    // Private members (not accessible outside the class)
    int width, height;
    
    // Public members (accessible outside the class)
  public:
    // Constructor declaration
    Rectangle(int, int);
    
    // Method to calculate the area of the rectangle
    int area(void);
} rect, rectb;

// Constructor definition outside the class
Rectangle::Rectangle(int a, int b) {
  width = a;
  height = b;
}

int main() {
  // Create two instances of the Rectangle class using the constructor
  Rectangle rect(3, 4);
  Rectangle rectb(5, 6);
  
  // Print areas of both rectangles
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  
  return 0;
}
