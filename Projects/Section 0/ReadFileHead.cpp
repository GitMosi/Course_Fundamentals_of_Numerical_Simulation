#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    // Print the total number of command line arguments
    cout << "Number of command line arguments = " << argc << "\n";

    // Loop through each argument
    for (int i = 0; i < argc; i++)
    {
        // Print the index and value of each argument
        cout << "Argument " << i << " = " << argv[i] << "\n";
    }

    // Get the program name from argv[0]
    string program_name = argv[0];

    // Convert the second command line argument to an integer
    int number_of_nodes = atoi(argv[1]);

    // Convert the third command line argument to a double
    double conductivity = atof(argv[2]);

    // Print the program name
    cout << "Program name = " << program_name << "\n";

    // Print the number of nodes
    cout << "Number of nodes = " << number_of_nodes << "\n";

    // Print the conductivity
    cout << "Conductivity = " << conductivity << "\n";

    return 0;
}
