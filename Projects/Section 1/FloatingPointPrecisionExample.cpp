#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>

using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    double x = 1.83642386795686578786;  // Define a double variable with a long decimal representation

    std::ofstream write_output("Output.dat");  // Open a file named "Output.dat" for writing

    // Set precision to 3 significant figures
    write_output.precision(3);
    write_output << x << "\n";  // Write x with 3 significant figures

    // Set precision to 5 significant figures
    write_output.precision(5);
    write_output << x << "\n";  // Write x with 5 significant figures

    // Set precision to 20 significant figures (10 decimal places)
    write_output.precision(20);
    write_output << x << "\n";  // Write x with 20 significant figures

    // Set precision for cout to 10 decimal places
    cout.precision(10);

    // Print x using cout with 10 decimal places
    cout << x;

    write_output.close();  // Close the file
    return 0;  // Indicate successful program execution
}
