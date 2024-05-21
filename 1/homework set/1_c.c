#include <stdio.h>

int main() {
    float length, width, perimeter;

    // Get the length from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Get the width from the user
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the perimeter using the formula: perimeter = 2 * (length + width)
    perimeter = 2.0f * (length + width);

    // Print the calculated perimeter
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    int number, cube;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the cube using multiplication
    cube = number * number * number;

    // Print the calculated cube
    printf("The cube of %d is: %d\n", number, cube);

    return 0;
}