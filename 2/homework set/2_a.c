#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Get the first number from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Get the second number from the user
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Get the third number from the user
    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0f;  // Ensure floating-point division

    // Print the calculated average
    printf("The average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, average);

    return 0;
}
