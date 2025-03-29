// Define a structure named 'product' with two members: 'weight' (integer) and 'price' (double)
struct product {
  int weight;
  double price;
} ;

// Declare three variables of type 'product': 'apple', 'banana', and 'melon'
product apple;
product banana, melon;

// Redefine the 'product' structure with the same members
struct product {
  int weight;
  double price;
} apple, banana, melon;

// Access the 'weight' member of 'apple'
apple.weight

// Access the 'price' member of 'banana'
banana.price

// Access the 'weight' member of 'melon'
melon.weight
