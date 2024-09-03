#include <iostream> // Include the input/output stream library for cin and cout

using namespace std; // Use the standard namespace to avoid prefixing standard library names with 'std::'

// Function to calculate the Greatest Common Divisor (GCD) of two integers using the Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) // Base case: If the second number is 0, return the first number as the GCD
        return a;
    else // Recursive case: Call gcd with b and the remainder of a divided by b
        return gcd(b, a % b);
}

// Function to reduce a fraction by dividing the numerator by the greatest common divisor
// Note: This function only returns the reduced numerator, but the denominator should also be reduced for a complete result
int reduce(int num, int denom) {
    int com_divisor = gcd(num, denom); // Find the greatest common divisor
    return num / com_divisor; // Return the reduced numerator (denominator reduction is not handled here)
}

int main()
{
    int num; // Variable to store the numerator
    int denom; // Variable to store the denominator

    // Prompt the user to enter the numerator
    std::cout << "Enter the numerator: ";
    std::cin >> num; // Read the numerator from the user

    // Prompt the user to enter the denominator
    std::cout << "Enter the denominator: ";
    std::cin >> denom; // Read the denominator from the user

    // Check if the numerator is evenly divisible by the denominator
    if (denom == 0) {
        std::cout << "Denominator cannot be zero."; // Handle the case where the denominator is zero
    } else if (num % denom == 0) {
        std::cout << 1; // Output 1 if the numerator is divisible by the denominator
    } else if (num <= 0 || denom <= 0) {
        std::cout << 0; // Output 0 if either number is non-positive
    } else {
        std::cout << "The fraction cannot be simplified directly."; // Indicate that the fraction is not handled by current logic
    }

    return 0; // Return 0 to indicate successful completion of the program
}