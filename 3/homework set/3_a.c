#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int number, originalNumber, remainder, n = 0, result = 0;

    // Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Check if the number is Armstrong
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
