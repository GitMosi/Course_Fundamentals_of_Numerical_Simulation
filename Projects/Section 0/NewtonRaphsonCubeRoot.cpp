#include <cmath>
#include <iostream>
using namespace std;

// Function prototype declaration
void CalculateCubeRoot(double& x, double K,
                       double tolerance = 1.0e-6,
                       int maxIterations = 100);

int main(int argc, char * argv[])
{
    // Initial values
    double x = 1.0;
    double K = 12.0;

    // Calculate cube root using default values
    CalculateCubeRoot(x, K);

    // Calculate cube root using a custom tolerance
    double tolerance = 0.001;
    CalculateCubeRoot(x, K, tolerance);

    // Calculate cube root with custom tolerance and max iterations
    int maxIterations = 50;
    CalculateCubeRoot(x, K, tolerance, maxIterations);

    return 0;
}

// Function definition
void CalculateCubeRoot(double& x, double K,
                       double tolerance, int maxIterations)
{
    int iterations = 0;
    double residual = x*x*x-K;
    cout << maxIterations << "\t" << tolerance << endl;
    
    while ((fabs(residual) > tolerance) &&
           (iterations < maxIterations))
    {
        // Newton-Raphson method formula
        x = x-(x*x*x-K)/(3.0*x*x);
        
        // Update residual
        residual = x*x*x-K;
        
        // Increment iteration counter
        iterations++;
    }
}
