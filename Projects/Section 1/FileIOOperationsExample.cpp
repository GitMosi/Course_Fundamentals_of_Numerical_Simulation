#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>  // Include the iostream library for file operations

using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    double x[3] = {0.0, 1.0, 2.0};  // Declare and initialize a 3-element array x
    double y[3] = {1.0, 2.0, 3.0};  // Declare and initialize a 3-element array y

    ofstream write_output("Output.dat");  // Open a file named "Output.dat" for writing
    assert(write_output.is_open());  // Check if the file was successfully opened

    for (int i = 0; i < 3; i++)  // Loop through the arrays
    {
        write_output << x[i] << " " << y[i] << "\n";  // Write elements of x and y to the file
    }

    write_output.flush();  // Flush the buffer to ensure immediate writing
    write_output.close();  // Close the file

    // Reopen the file in append mode
    write_output.open("Output.dat", ios::app);
    assert(write_output.is_open());  // Check if the file was successfully reopened

    for (int i = 0; i < 3; i++)  // Loop through the arrays again
    {
        write_output << i * x[i] << " " << i * y[i] << "\n";  // Write scaled elements
    }

    write_output.flush();  // Flush the buffer again
    write_output.close();  // Close the file again

    return 0;  // Indicate successful program execution
}
