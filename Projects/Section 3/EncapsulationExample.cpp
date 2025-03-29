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

// Explanation of the code:

// The class Rectangle is defined with two private integer members: width and height.
// These members are encapsulated and cannot be accessed directly from outside the class.

// The class has two public member functions:
// 1. set_values(int, int): A method to set the dimensions of the rectangle.
// 2. area(void): A method to calculate the area of the rectangle.

// An object named rect is created from the Rectangle class.
// This object can be used to call the public member functions of the class.

// Usage example:
// rect.set_values(5, 10);  // Set the dimensions of the rectangle
// int area = rect.area();   // Calculate and get the area of the rectangle

// The class demonstrates encapsulation, where the internal state (width and height) is hidden
// and can only be manipulated through the provided public interface (set_values and area).
