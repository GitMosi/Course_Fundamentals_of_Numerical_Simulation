#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    double x[6], y[6];  // Declare arrays to store 6 pairs of coordinates
    
    std::ifstream read_file("Output.dat");  // Open file "Output.dat" for reading
    assert(read_file.is_open());  // Check if file was successfully opened
    
    for (int i = 0; i < 6; i++)  // Loop through 6 pairs of coordinates
    {
        read_file >> x[i] >> y[i];  // Read x and y values from file into arrays
        cout << x[i] << "\t" << y[i] << "\n";  // Print the read values
    }
    
    read_file.close();  // Close the file after reading
    return 0;
}
