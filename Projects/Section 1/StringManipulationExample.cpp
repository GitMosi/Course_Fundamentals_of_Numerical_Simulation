#include <iostream>
#include <cmath>
#include <string>  // Include the string library for string manipulation

using namespace std;  // Allow use of standard library functions without prefix

int main(int argc, char **argv)  // Main function declaration with command-line arguments
{
    char letter;  // Declare a character variable
    letter = 'a';  // Assign the character 'a' to letter
    cout << "The character is " << letter << "\n";  // Output the character

    bool flag1, flag2;  // Declare two boolean variables
    flag1 = true;  // Set flag1 to true
    flag2 = false;  // Set flag2 to false

    std::string city;  // Declare a string variable
    city = "Oxford";  // Assign the string "Oxford" to city
    std::cout << "String length = " << city.length() << "\n";  // Output string length
    std::cout << "Third character = " << city.at(2) << "\n";  // Access third character using at()
    std::cout << "Third character = " << city[2] << "\n";  // Access third character using indexing
    std::cout << city << "\n";  // Output entire string
    std::cout << city.c_str() << "\n";  // Convert string to const char* and output

    std::string name;  // Declare another string variable
    std::cout << "Enter your name and then hit RETURN\n";
    std::getline(std::cin, name);  // Read a line of input into the name variable
    std::cout << "Your name is " << name << "\n";  // Output the entered name
}
