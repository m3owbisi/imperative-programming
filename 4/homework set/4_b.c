#include <stdio.h>
#include <math.h> // For sqrt() function

int main() {
    int lower, upper, isPrime;

    // Get the lower and upper limits from the user
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    // Print header message
    printf("Prime numbers between %d and %d are: ", lower, upper);

    // Loop through numbers from lower to upper
    for (int number = lower; number <= upper; number++) {
        isPrime = 1; // Assume prime initially

        // Handle non-positive numbers (not prime)
        if (number <= 1) {
            isPrime = 0;
        } else {
            // Check for divisibility from 2 to square root of number
            for (int i = 2; i <= sqrt(number); i++) {
                if (number % i == 0) {
                    isPrime = 0; // Divisible by a number other than 1 and itself
                    break; // Exit the inner loop if not prime
                }
            }
        }

        // Print prime numbers
        if (isPrime) {
            printf("%d ", number);
        }
    }

    printf("\n"); // Add a newline for better formatting

    return 0;
}