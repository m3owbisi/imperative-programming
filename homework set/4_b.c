#include <stdio.h>
#include <math.h> // For sqrt() function

int main() {
    int number, isPrime = 1;

    // Get the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Handle non-positive numbers
    if (number <= 1) {
        isPrime = 0; // Not prime (1 or less)
    } else {
        // Check for divisibility from 2 to square root of number
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = 0; // Divisible by a number other than 1 and itself
                break; // Exit the loop if not prime
            }
        }
    }

    // Print result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
