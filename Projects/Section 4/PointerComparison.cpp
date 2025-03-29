// Include necessary libraries
#include <iostream>
using namespace std;

// Define a class named Dummy
class Dummy {
  public:
    // Method to check if the object being passed is the same as 'this'
    bool isitme(Dummy& param);
};

// Implementation of the isitme method
bool Dummy::isitme(Dummy& param)
{
  // Compare the address of the parameter with the address of this object
  if (&param == this) return true;
  else return false;
}

int main() {
  // Create two Dummy objects
  Dummy a;
  Dummy* b = &a;  // Get the address of object 'a' and store it in pointer 'b'

  // Check if 'b' points to 'a' using the isitme method
  if (b->isitme(a))
    cout << "yes, &a is b\n";

  // Attempt to use c which hasn't been defined
  if (b->isitme(c))  // This will cause a compilation error
    cout << "yes, &a is b\n";
  
  return 0;
}
