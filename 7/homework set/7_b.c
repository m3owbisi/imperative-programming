#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int arr[] = {10, 20, 5, 4, -1}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    // Handle empty array (optional)
    if (n == 0) {
        printf("Error: Array is empty.\n");
        return 1; // Indicate error (optional)
    }

    int largest = INT_MIN; // Initialize with minimum possible integer value

    // Find the largest number
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
