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
} films[3];

// Function prototype for printmovie
void printmovie(movies_t movie);

int main()
{
  // Local variables
  string mystr;
  int n;

  // Loop through the array of movies
  for (n = 0; n < 3; n++)
  {
    // Prompt user for input and read title
    cout << "Enter title: ";
    getline(cin, films[n].title);

    // Read year from user input
    cout << "Enter year: ";
    getline(cin, mystr);

    // Convert string to integer
    stringstream(mystr) >> films[n].year;
  }

  // Print all entered movies
  cout << "\nYou have entered these movies:\n";
  for (n = 0; n < 3; n++)
    printmovie(films[n]);

  return 0;
}

// Function to print a movie
void printmovie(movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}
