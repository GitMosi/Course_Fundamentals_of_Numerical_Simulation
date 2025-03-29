#include <cassert>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    // Declare arrays to hold 100 double values each
    double x[100], y[100];

    // Open the input file "Output.dat"
    std::ifstream read_file("Output.dat");

    // Check if the file was successfully opened
    assert(read_file.is_open());

    int i = 0;
    while(!read_file.eof())
    {
        // Read a double value into x[i] and another into y[i]
        read_file >> x[i] >> y[i];
        
        // Print the read values with formatted output
        cout << setw(10) << setprecision(8) << x[i] << "\t" << y[i] << "\n";
    }

    return 0;
}
