#include <stdio.h>

int main() {
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
