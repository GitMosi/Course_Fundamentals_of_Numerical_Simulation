#include <iostream>
#include <cmath>
#include <string>
using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    int x = 1, y = 2;  // Declare and initialize variables x and y
    
    cout << "x = " << x << " and y = " << y << "\n";  // Print values of x and y
    cout << "a\tb'c\"d?\\n\a";  // Print special characters
    std::cout.flush();  // Flush the output buffer
    
    int pin;  // Declare variable pin
    cout << "Enter your PIN, then hit RETURN\n";  // Prompt user to enter PIN
    std::cin >> pin;  // Read input into pin variable
    cout << pin << "\n";  // Print the entered PIN

    int account_number;  // Declare variable account_number
    std::cout << "Enter your account number\n";
    std::cout << "and then your PIN followed by RETURN\n";
    std::cin >> account_number >> pin;  // Read two inputs in one statement
}
