#include <stdio.h>

int main() {
    int number;

    // Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is natural (greater than or equal to 1)
    if (number >= 1) {
        printf("%d is a natural number.\n", number);
    } else {
        printf("%d is not a natural number.\n", number);
    }

    return 0;
}
