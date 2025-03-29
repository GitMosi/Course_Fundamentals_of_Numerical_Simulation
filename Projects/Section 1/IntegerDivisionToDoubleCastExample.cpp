#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    int i = 5, j = 2;  // Declare and initialize variables i and j
    double k;          // Declare variable k as a double
    
    k = ((double)(i)) / ((double)(j));  // Cast i to double before division
    std::cout << k << "\n";             // Print the result of the division

    return 0;
}
