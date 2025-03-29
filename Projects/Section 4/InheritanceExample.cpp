// Include necessary libraries
#include <iostream>
using namespace std;

// Define the base class Polygon
class Polygon {
  protected:
    // Protected member variables for width and height
    int width, height;
  public:
    // Public method to set values for width and height
    void set_values(int a, int b)
      { 
        // Set width and height using the passed values
        width=a; 
        height=b;
      }
};

// Define the Rectangle class derived from Polygon
class Rectangle : public Polygon {
  public:
    // Public method to calculate area
    int area()
      { 
        // Calculate area by multiplying width and height
        return width * height; 
      }
};

// Define the Triangle class derived from Polygon
class Triangle : public Polygon {
  public:
    // Public method to calculate area
    int area()
      { 
        // Calculate area using the formula: base * height / 2
        return width * height / 2; 
      }
  };
  
int main() {
  // Create a Rectangle object
  Rectangle rect;
  
  // Create a Triangle object
  Triangle trgl;
  
  // Set values for Rectangle
  rect.set_values(4,5);
  
  // Set values for Triangle
  trgl.set_values(4,5);
  
  // Display area of Rectangle
  cout << rect.area() << '\n';
  
  // Display area of Triangle
  cout << trgl.area() << '\n';
  
  return 0;
}
