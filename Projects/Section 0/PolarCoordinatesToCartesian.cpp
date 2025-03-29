#include <iostream>
#include <cmath>
using namespace std;

// Function prototype declaration
void CalculateRealAndImaginary(double r, double theta,
                               double * pReal,
                               double * pImaginary);

int main(int argc, char * argv[])
{
    // Initialize variables
    double r = 3.4;
    double theta = 1.23;
    double x, y;

    // Call the function to calculate real and imaginary parts
    CalculateRealAndImaginary(r, theta, &x, &y);

    // Print the results
    std::cout << "Real part = " << x << "\n";
    std::cout << "Imaginary part = " << y << "\n";

    return 0;
}

// Function definition
void CalculateRealAndImaginary(double r, double theta,
                               double * pReal,
                               double * pImaginary)
{
    // Calculate real part using cosine
    *pReal = r * cos(theta);
    
    // Calculate imaginary part using sine
    *pImaginary = r * sin(theta);
}
