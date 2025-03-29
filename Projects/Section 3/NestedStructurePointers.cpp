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

// Define another structure 'friends_t' which contains:
//   - name (string)
//   - email (string)
//   - favorite_movie (of type movies_t)
struct friends_t {
  string name;
  string email;
  movies_t favorite_movie;
} charlie, maria;

// Declare a pointer to friends_t and initialize it with the address of charlie
friends_t * pfriends = &charlie;

// The rest of your code would use this pointer to access members of charlie's structure
// For example:
// cout << pfriends->name;
