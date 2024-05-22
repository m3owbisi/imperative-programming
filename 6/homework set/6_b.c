#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Initialize the array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array in reverse order: ");
    // Loop from the end of the array to the beginning
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
