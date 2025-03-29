// Include necessary headers
#include <iostream>
using namespace std;

// Define a class named Rectangle
class Rectangle {
  // Private members (not accessible outside the class)
  int width, height;
  
  // Public members (accessible outside the class)
public:
  // Constructor declaration taking two int parameters
  Rectangle(int x, int y);
  
  // Method to calculate the area of the rectangle
  int area(void);
};

// Constructor definition for Rectangle
Rectangle::Rectangle(int x, int y) : width(x), height(y) {}

// Main function
int main() {
  // Create a Rectangle object using the default constructor
  Rectangle obj(3, 4);
  
  // Declare pointers to Rectangle
  Rectangle* foo, * bar, * baz;
  
  // Assign addresses to pointers
  foo = &obj;  // foo now points to the obj Rectangle
  
  // Dynamically allocate memory for bar
  bar = new Rectangle(5, 6);
  
  // Dynamically allocate an array of 2 Rectangle objects
  baz = new Rectangle[2] { {2, 5}, {3, 6} };
  
  // Print areas of different Rectangle objects
  cout << "obj's area: " << obj.area() << '\n';
  cout << "*foo's area: " << foo->area() << '\n';
  cout << "*bar's area: " << bar->area() << '\n';
  cout << "baz[0]'s area:" << baz[0].area() << '\n';
  cout << "baz[1]'s area:" << baz[1].area() << '\n';

  // Deallocate dynamically allocated memory
  delete bar;
  delete[] baz;

  return 0;
}
