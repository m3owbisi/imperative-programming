#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i;

    // Allocate memory for 500 integers
    ptr = (int*)calloc(500, sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Error! Memory allocation failed.\n");
        return 1;
    }

    // Store first 500 natural numbers
    for (i = 0; i < 500; i++) {
        ptr[i] = i + 1; // Start from 1 for natural numbers
    }

    // Access and print some elements (optional)
    printf("First 10 natural numbers: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory when done
    free(ptr);

    printf("Memory deallocated.\n");

    return 0;
}
