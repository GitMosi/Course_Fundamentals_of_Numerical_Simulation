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
} mine, yours;

// Function prototype for printmovie
void printmovie(movies_t movie);

int main()
{
  // Local variable to hold user input
  string mystr;

  // Initialize mine's movie information
  mine.title = "2001 A Space Odyssey";
  mine.year = 1968;

  // Prompt user for input and read title
  cout << "Enter title: ";
  getline(cin, yours.title);

  // Read year from user input
  cout << "Enter year: ";
  getline(cin, mystr);

  // Convert string to integer
  stringstream(mystr) >> yours.year;

  // Print mine's favorite movie
  cout << "My favorite movie is:\n ";
  printmovie(mine);

  // Print yours' favorite movie
  cout << "And yours is:\n ";
  printmovie(yours);

  return 0;
}

// Function to print a movie
void printmovie(movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}
