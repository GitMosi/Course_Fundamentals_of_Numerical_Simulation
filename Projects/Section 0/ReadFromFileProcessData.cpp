#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    // Declare arrays to hold 6 double values each
    double x[6], y[6];

    // Open the input file "Output.dat"
    std::ifstream read_file("Output.dat");

    // Check if the file was successfully opened
    assert(read_file.is_open());

    // Read and print 6 pairs of values
    for (int i = 0; i < 6; i++)
    {
        // Read a double value into x[i] and another into y[i]
        read_file >> x[i] >> y[i];
        
        // Print the read values
        cout << x[i] << "\t" << y[i] << "\n";
    }

    // Close the file
    read_file.close();

    return 0;
}
