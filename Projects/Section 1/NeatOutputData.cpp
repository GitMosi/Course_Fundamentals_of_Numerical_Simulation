#include <fstream>
using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char * argv[])  // Main function declaration with command-line arguments
{
    ofstream write_file("OutputFormatted.dat");  // Open a file named "OutputFormatted.dat" for writing

    // Configure output formatting
    write_file.setf(ios::scientific);  // Use scientific notation
    write_file.setf(ios::showpos);     // Show positive sign
    write_file.precision(13);          // Set precision to 13 digits

    double x = 3.4, y = 0.0000855, z = 984.424;  // Declare and initialize variables
    write_file << x << " " << y << " " << z << "\n";  // Write values to the file
    write_file.close();  // Close the file
    return 0;  // Indicate successful program execution
}
