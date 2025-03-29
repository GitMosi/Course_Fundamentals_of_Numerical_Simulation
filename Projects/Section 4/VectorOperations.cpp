// Include necessary libraries
#include <iostream>
#include <cmath>
using namespace std;

// Define a class named Velocity
class Velocity
{
  private:
    // Private array to store velocity components
    double v[3];
    
  public:
    // Default constructor
    Velocity () {};
    
    // Parameterized constructor
    Velocity(double v0, double v1, double v2);
    
    // Overload the '+' operator
    Velocity operator + (const Velocity& param);
    
    // Method to calculate speed
    double speed()
    {
        return sqrt(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]);
    }
};

// Implementation of the parameterized constructor
Velocity::Velocity(double v0, double v1, double v2)
{
    v[0] = v0;
    v[1] = v1;
    v[2] = v2;
}

// Implementation of the '+' operator overload
Velocity Velocity::operator+ (const Velocity& param) 
{
    Velocity temp;
    temp.v[0] = v[0] + param.v[0];
    temp.v[1] = v[1] + param.v[1];
    temp.v[2] = v[2] + param.v[2];
    return temp;
}

int main() {
  // Create Velocity objects
  Velocity v0(0, -5, 1), v1(2, 3, 0);
  
  // Add two velocities using the overloaded '+'
  Velocity v2 = v0 + v1;
  
  // Calculate and output speeds of all three velocity objects
  cout << "Speed of v0: " << v0.speed() << endl;
  cout << "Speed of v1: " << v1.speed() << endl;
  cout << "Speed of v2: " << v2.speed() << endl;
  
  return 0;
}
