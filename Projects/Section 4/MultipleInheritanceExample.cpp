// Include necessary libraries
#include <iostream>
using namespace std;

// Define the base class Polygon
class Polygon {
  protected:
    // Protected member variables for width and height
    int width, height;
  public:
    // Constructor with int parameters
    Polygon(int a, int b) : width(a), height(b) {}
};

// Define the Output class with a static method
class Output {
  public:
    // Static method to print an integer
    static void print(int i);
};

// Implement the print method of Output
void Output::print(int i) {
  cout << i << '\n';
}

// Define the Rectangle class derived from both Polygon and Output
class Rectangle : public Polygon, public Output {
  public:
    // Constructor calling Polygon's constructor
    Rectangle(int a, int b) : Polygon(a,b) {}
    
    // Method to calculate area
    int area()
      { 
        return width * height; 
      }
};

// Define the Triangle class derived from both Polygon and Output
class Triangle : public Polygon, public Output {
  public:
    // Constructor calling Polygon's constructor
    Triangle(int a, int b) : Polygon(a,b) {}
    
    // Method to calculate area
    int area()
      { 
        return width * height / 2; 
      }
};
  
int main() {
  // Create a Rectangle object
  Rectangle rect(4,5);
  
  // Create a Triangle object
  Triangle trgl(4,5);
  
  // Use Output::print to display Rectangle's area
  rect.print(rect.area());
  
  // Use Triangle::print to display Triangle's area
  Triangle::print(trgl.area());
  
  return 0;
}
