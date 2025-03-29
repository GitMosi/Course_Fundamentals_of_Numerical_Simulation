// Include necessary libraries
#include <iostream>
using namespace std;

// Define the base class Mother
class Mother {
  public:
    // Default constructor
    Mother() 
      { cout << "Mother: no parameters\n"; }
    
    // Constructor with int parameter
    Mother(int a)
      { cout << "Mother: int parameter\n"; }
};

// Define the Daughter class derived from Mother
class Daughter : public Mother {
  public:
    // Constructor with int parameter
    Daughter(int a)
      { cout << "Daughter: int parameter\n\n"; }
};

// Define the Son class derived from Mother
class Son : public Mother {
  public:
    // Constructor with int parameter, calling Mother's constructor
    Son(int a) : Mother(a)
      { cout << "Son: int parameter\n\n"; }
};

int main() {
  // Create a Daughter object with default constructor
  Daughter kelly(0);
  
  // Create a Son object with default constructor
  Son bud(0);
  
  return 0;
}
