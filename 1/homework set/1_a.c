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

    return 0;
}
