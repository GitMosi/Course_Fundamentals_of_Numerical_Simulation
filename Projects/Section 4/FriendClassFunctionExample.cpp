// Include necessary libraries
#include <iostream>
using namespace std;

// Forward declare the Square class
class Square;

// Define the Rectangle class
class Rectangle {
    int width, height;
  public:
    int area() { return (width * height); }
    void convert(Square a);
};

// Define the Square class
class Square {
  friend class Rectangle;  // Declare Rectangle as a friend class
  private:
    int side;
  public:
    Square(int a) : side(a) {}
};

// Implement the convert method of Rectangle
void Rectangle::convert(Square a) {
  width = a.side;
  height = a.side;
}

int main() {
  Rectangle rect;
  Square sqr(4);
  
  // Use the convert method to set Rectangle's dimensions from Square
  rect.convert(sqr);
  
  cout << rect.area();
  return 0;
}
