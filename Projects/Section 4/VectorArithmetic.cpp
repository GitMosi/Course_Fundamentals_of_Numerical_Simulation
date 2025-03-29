// Include necessary libraries
#include <iostream>
using namespace std;

// Define a class named CVector
class CVector {
  public:
    // Public member variables representing coordinates
    int x, y;
    
    // Default constructor
    CVector () {}
    
    // Parameterized constructor
    CVector (int a, int b) : x(a), y(b) {}
};

// Non-member function overload of '+' operator
CVector operator+ (const CVector& lhs, const CVector& rhs) {
  // Create a new CVector object to store the result
  CVector temp;
  
  // Add corresponding components
  temp.x = lhs.x + rhs.x;
  temp.y = lhs.y + rhs.y;
  
  // Return the result
  return temp;
}

int main() {
  // Create two CVector objects
  CVector foo(3, 1);
  CVector bar(1, 2);
  
  // Use the overloaded '+' operator to add foo and bar
  CVector result = foo + bar;
  
  // Output the result
  cout << result.x << ',' << result.y << '\n';
  
  return 0;
}
