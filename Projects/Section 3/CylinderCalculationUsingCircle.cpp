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
    
    // Method to calculate the area of the circle
    double area() {return radius*radius*3.14159265;}
};

// Constructor definition for Circle
Circle::Circle(double r) : radius(r) {}

class Cylinder {
    // Private member (not accessible outside the class)
    Circle base;
    
    // Private member (not accessible outside the class)
    double height;
    
    // Public members (accessible outside the class)
  public:
    // Constructor declaration taking two double parameters
    Cylinder(double r, double h);
    
    // Method to calculate the volume of the cylinder
    double volume() {return base.area() * height;}
};

// Constructor definition for Cylinder
Cylinder::Cylinder(double r, double h) : base(r), height(h) {}

int main() {
  // Create a Cylinder object with base radius 10 and height 20
  Cylinder foo(10, 20);

  // Print the volume of the cylinder
  cout << "foo's volume: " << foo.volume() << '\n';
  
  return 0;
}

	

foo's volume: 6283.19

	
Edit & Run
