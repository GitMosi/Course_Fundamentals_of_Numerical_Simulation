#include <cassert>
#include <iostream>
#include <fstream>
#include <iomanip>      // std::setw

using namespace std;
int main(int argc, char *argv[])
{
    double x[100], y[100];  // Declare arrays to store up to 100 pairs of coordinates
    
    std::ifstream read_file("Output.dat");  // Open file "Output.dat" for reading
    assert(read_file.is_open());  // Check if file was successfully opened
    
    int i = 0;  // Initialize counter variable
    
    while (!read_file.eof())  // Loop until end of file is reached
    {
        read_file >> x[i] >> y[i];  // Read x and y values from file into arrays
        cout << setw(10) << setprecision(8) << x[i] << "\t" << y[i] << "\n";  // Print formatted values
        i++;  // Increment counter
    }
    
    return 0;
}
