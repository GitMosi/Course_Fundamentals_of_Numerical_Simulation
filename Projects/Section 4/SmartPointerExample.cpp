// Include necessary libraries
#include <iostream>
#include <string>
using namespace std;

// Define a class named Example4
class Example4 {
    // Private member variable: a pointer to a string
    string* ptr;
  public:
    // Default constructor
    Example4() : ptr(new string) {}
    
    // Parameterized constructor
    Example4(const string& str) : ptr(new string(str)) {}
    
    // Destructor
    ~Example4() { delete ptr; }
    
    // Method to access the content of the string
    const string& content() const { return *ptr; }
};

int main() {
  // Create an Example4 object with default constructor
  Example4 foo;
  
  // Create an Example4 object with a string argument
  Example4 bar("Example");
  
  // Access and display the content of bar
  cout << "bar's content: " << bar.content() << '\n';
  
  return 0;
}
