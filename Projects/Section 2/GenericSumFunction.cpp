// Define a function template named 'sum' that works with any type T
template <class SomeType>
SomeType sum(SomeType a, SomeType b)
{
    // Declare a variable of type SomeType to store the result
    SomeType result;
    
    // Add the two input values and store the result
    result = a + b;
    
    // Return the result
    return result;
}
