#include <iostream>  // Input/output stream library
#include <cmath>     // Mathematical functions library
#include <string>    // String handling library
#include <cassert>   // Assert macro for runtime diagnostics
#include <fstream>   // File stream library

using namespace std;

int main(int argc, char **argv)
{
    // Declare arrays to store x and y values
    double x[3] = {0.0, 1.0, 2.0};
    double y[3] = {1.0, 2.0, 3.0};

    // Open an output file named "Output.dat"
    ofstream write_output("Output.dat");
    
    // Check if the file was successfully opened
    assert(write_output.is_open());

    // Write x and y values to the file
    for (int i=0; i<3; i++)
    {
        write_output << x[i] << " " << y[i] << "\n";
    }
    
    // Flush the buffer to ensure data is written immediately
    write_output.flush();
    
    // Close the file
    write_output.close();

    // Reopen the file with append mode
    write_output.open("Output.dat", ios::app);
    
    // Check if the file was successfully reopened
    assert(write_output.is_open());

    // Write modified x and y values to the file
    for (int i=0; i<3; i++)
    {
        write_output << i*x[i] << " " << i*y[i] << "\n";
    }
    
    // Flush the buffer again
    write_output.flush();
    
    // Close the file once more
    write_output.close();

    return 0;
}
