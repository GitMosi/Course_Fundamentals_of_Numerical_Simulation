#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char **argv)
{
    int i=1;  // Initialize variable i with value 1
    
    switch(i)  // Start a switch statement based on the value of i
    {
    case 1:
        std::cout << "i = 1\n";  // Print message when i equals 1
        break;
    
    case 20:
        std::cout << "i = 1 or i = 20\n";  // Print message when i equals 1 or 20
        break;
    
    default:
        std::cout << "i is not 1 or 20\n";  // Default case, executed when i doesn't match other cases
    }
    
    return 0;  // Successful program execution
}
