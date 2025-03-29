#include <iostream>
#include <cmath>
#include <cassert>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char **argv)
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Number of random numbers to generate
    int n = 100;

    // Variables to hold random doubles
    double x, y;

    // Create an output file named "Output.dat"
    ofstream write_output("Output.dat");

    // Check if the file was successfully opened
    assert(write_output.is_open());

    // Set output format to scientific notation with a plus sign
    write_output.setf(ios::scientific);
    write_output.setf(ios::showpos);

    // Set precision to 15 decimal places
    write_output.precision(15);

    // Generate and write random numbers
    for (int i = 0; i < n; i++)
    {
        // Generate a random double between 0 and 1
        x = double(rand()) / RAND_MAX;
        y = double(rand()) / RAND_MAX;

        // Write the pair of random numbers to the file
        write_output << x << "\t" << y << "\n";
    }

    // Ensure the data is written to disk
    write_output.flush();

    // Close the file
    write_output.close();

    return 0;
}
