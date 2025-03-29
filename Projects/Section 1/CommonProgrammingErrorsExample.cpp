#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char **argv)
{
    double x = 2.0;
    for (int i=0; i<5; i++); // semicolon is wrong - this loop does nothing
    {
        x *= 2.0;
    }
    std::cout << "x = " << x << "\n";

    // This erroneous line has no effect
    x == 2+2;
// After testing x against the value 4, the true/false
// answer is discarded.

    x = 3;
//This erroneous line will alter the value of x
    if (x = 4)
    {
        x = 6;
    }
    cout << x;
    return 0;
}
