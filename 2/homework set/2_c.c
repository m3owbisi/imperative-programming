#include <stdio.h>

int main() {
    int num1, num2;

    // Get the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Get the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the smallest number using an if-else statement
    if (num1 < num2) {
        printf("%d is the smallest number.\n", num1);
    } else {
        printf("%d is the smallest number.\n", num2);
    }

    return 0;
}
