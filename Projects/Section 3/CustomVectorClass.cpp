// Include necessary headers
#include <iostream>
using namespace std;

// Define a class named CVector
class CVector {
  // Public members (accessible outside the class)
public:
  // Data members
  int x, y;
  
  // Default constructor
  CVector();
  
  // Parameterized constructor
  CVector(int a, int b);
  
  // Overloaded '+' operator
  CVector operator+ (const CVector& param);
};

// Constructor definitions
CVector::CVector() {}  // Default constructor
CVector::CVector(int a, int b) : x(a), y(b) {}  // Parameterized constructor

// Overloaded '+' operator definition
CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}

// Main function
int main() {
  // Create two CVector objects
  CVector foo(3, 1);
  CVector bar(1, 2);
  
  // Create a third CVector object using the overloaded '+'
  CVector result = foo + bar;
  
  // Print the result
  cout << result.x << ',' << result.y << '\n';
  
  return 0;
}
