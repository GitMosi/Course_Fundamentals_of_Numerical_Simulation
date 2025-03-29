#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    // Declare variables
    double x = 7.8, y = 1.65, u = -3.4, z;

    // Calculate the remainder when x is divided by y
    z = fmod(x, y);
    cout << "Remainder when x is divided by y: " << z << "\n";

    // Note: fmod(x, y) returns the remainder rounded towards zero
    // For example, 7.8 = 4*1.65 + 1.2, so z will be 1.2

    // Calculate the arctangent of (y/x) in radians
    z = atan2(y, x);
    cout << "Arctangent of (y/x): " << z << "\n";

    // Note: atan2(y, x) returns the angle in radians between the vector (x, y) 
    // and the positive x-axis
    // The ordering of y and x matters - atan2(y, x) is different from atan(x/y)

    // Calculate the absolute value of u
    z = fabs(u);
    cout << "Absolute value of u: " << z << "\n";

    // Note: fabs(u) returns the absolute value of u
    // It should not be confused with abs(), which is for integer types

    return 0;
}
