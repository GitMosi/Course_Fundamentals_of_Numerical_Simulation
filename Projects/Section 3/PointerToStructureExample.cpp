// Include necessary headers
#include <iostream>
#include <string>
#include <sstream>

// Use standard namespace
using namespace std;

// Define a structure named 'movies_t' with two members: 'title' (string) and 'year' (int)
struct movies_t {
  string title;
  int year;
};

int main()
{
  // Local variable
  string mystr;

  // Declare a structure variable
  movies_t amovie;
  
  // Declare a pointer to movies_t
  movies_t * pmovie;
  
  // Assign the address of amovie to pmovie
  pmovie = &amovie;

  // Read title using the pointer
  cout << "Enter title: ";
  getline(cin, pmovie->title);

  // Read year using the pointer
  cout << "Enter year: ";
  getline(cin, mystr);

  // Convert string to integer using the pointer
  (stringstream) mystr >> pmovie->year;

  // Print entered movie information
  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";

  return 0;
}
