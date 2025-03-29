#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char **argv)
{
    double x = 10.0;
    int i = 0;
    
    // This loop will execute while x > 1, so if the
    // value of x does not decrease then it will not
    // terminate.
    while (x > 1.0)
    {
        x += 0.5;
        i += 1;
    }
    
    cout << x << "\t" << i << "\n";
    // Here we know the guard (x > 1.0) has broken.
    // This means that after the loop, x <= 1.0

    x = 10.0;
    i = 0;
    
    // This loop will execute while x > 1, so if the
    // value of x does not decrease then it will not
    // terminate.
    do
    {
        x += 0.5;
        i += 1;
    } while (x > 1.0);
    
    cout << x << "\t" << i << "\n";
    return 0;
}
