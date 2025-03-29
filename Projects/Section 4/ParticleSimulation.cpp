// Include necessary libraries
#include <iostream>
#include <cmath>
using namespace std;

// Define a class named Particle
class Particle
{
  private:
    // Private member variables representing position and velocity components
    double x, y, z, vx, vy, vz, m;
    
  public:
    // Public member variable
    int d;
    
    // Method to set particle values
    void set_values(double x1, double y1, double z1, 
                     double vx1, double vy1, double vz1, double m1);
    
    // Method to calculate speed
    double speed()
    {
        return sqrt(vx*vx + vy*vy + vz*vz);
    }
    
    // Method to calculate momentum
    double momentum()
    {
        return m * speed();
    }
    
    // Method to calculate kinetic energy
    double energy()
    {
        double s = speed();
        return 0.5 * m * s * s;
    }
};

// Implementation of the set_values method
void Particle::set_values(double x1, double y1, double z1, 
                         double vx1, double vy1, double vz1, double m1)
{
  x = x1;
  y = y1;
  z = z1;
  vx = vx1;
  vy = vy1;
  vz = vz1;
  m = m1;
}

int main() {
  // Create two Particle objects
  Particle p0, p1;
  
  // Set values for particle p0
  p0.set_values(0, -5, 1, 1, 1, 1, 1);
  
  // Calculate and output speed, momentum, and energy of p0
  cout << "Speed: " << p0.speed() << endl;
  cout << "Momentum: " << p0.momentum() << endl;
  cout << "Energy: " << p0.energy() << endl;
  
  return 0;
}
