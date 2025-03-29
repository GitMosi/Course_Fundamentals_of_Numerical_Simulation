#include <fstream>
using namespace std;

int main(int argc, char * argv[])
{
    // Create an output file named "OutputFormatted.dat"
    ofstream write_file("OutputFormatted.dat");

    // Set the output format to scientific notation
    write_file.setf(ios::scientific);

    // Display the sign of the number (+/-)
    write_file.setf(ios::showpos);

    // Set the precision to 13 decimal places
    write_file.precision(13);

    // Define sample values
    double x = 3.4, y = 0.0000855, z = 984.424;

    // Write the values to the file
    write_file << x << " " << y << " " << z << "\n";

    // Close the file
    write_file.close();

    return 0;
}
