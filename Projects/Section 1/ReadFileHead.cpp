#include <iostream>  
#include <cstdlib>   

using namespace std;  // Allow use of standard library elements without prefix

int main(int argc, char *argv[])  // Main function entry point
{
    cout << "Number of command line arguments = " << argc << "\n";  // Print number of command line arguments
    
    for (int i = 0; i < argc; i++)  // Iterate through all command line arguments
    {
        cout << "Argument " << i << " = " << argv[i] << "\n";  // Print each argument
    }

    string program_name = argv[0];  // Get program name from first argument
    int number_of_nodes = atoi(argv[1]);  // Convert second argument to integer
    double conductivity = atof(argv[2]);  // Convert third argument to double
    
    cout << "Program name = " << program_name << "\n";  // Print program name
    cout << "Number of nodes = " << number_of_nodes << "\n";  // Print number of nodes
    cout << "Conductivity = " << conductivity << "\n";  // Print conductivity value

    return 0;  // Successful program execution
}
