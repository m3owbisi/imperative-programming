#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to store the array
    float *array;

    // Allocate memory for an array of size 5 using calloc
    array = (float *)calloc(5, sizeof(float));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input values for the array from the user
    for (int i = 0; i < 5; ++i) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    // Display the entered values
    printf("\nEntered values for the array:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: %.2f\n", i + 1, array[i]);
    }

    // Free the allocated memory
    free(array);

    return 0;
}
