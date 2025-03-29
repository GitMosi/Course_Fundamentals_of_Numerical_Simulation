// Function to concatenate two strings
string concatenate(string a, string b)
{
  // Simply return the concatenation of a and b
  return a + b;
}

// Function to concatenate two strings by reference
string concatenate(string& a, string& b)
{
  // Modify the original strings by concatenating them
  a += b;
  return a;
}

// Function to concatenate two const strings
string concatenate(const string& a, const string& b)
{
  // Create a new string by concatenating a and b
  return a + b;
}
