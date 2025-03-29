#include <iostream>
//#include <cmath>
//#include <string>
#include <cassert>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));  // Seed random number generator with current time
    int n = 100;  // Number of random points to generate
    
    double x, y;  // Declare variables for x and y coordinates
    
    ofstream write_output("Output.dat");  // Open file "Output.dat" for writing
    assert(write_output.is_open());  // Check if file was successfully opened
    
    write_output.setf(ios::scientific);  // Use scientific notation
    write_output.setf(ios::showpos);     // Show positive sign
    write_output.precision(15);          // Set precision to 15 decimal places
    
    for (int i = 0; i < n; i++)  // Loop to generate 100 random points
    {
        x = double(rand()) / RAND_MAX;  // Generate random x coordinate
        y = double(rand()) / RAND_MAX;  // Generate random y coordinate
        write_output << x << "\t" << y << "\n";  // Write point to file
    }
    
    write_output.flush();  // Ensure all data is written to disk
    write_output.close();  // Close the file
    return 0;
}
