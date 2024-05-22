#include <stdio.h>

void insertAtEnd(int arr[], int *n, int x) {
  // Check if array is full
  if (*n >= sizeof(arr) / sizeof(arr[0])) {
    printf("Error: Array is full.\n");
    return;
  }

  // Insert the element at the end (adjusted index for zero-based array)
  arr[*n] = x;

  // Increment the size of the array
  (*n)++;
}

int main() {
  int arr[100] = {1, 2, 3, 4, 5}; // Sample array (adjust size as needed)
  int n = sizeof(arr) / sizeof(arr[0]); // Calculate initial size

  int x;
  printf("Enter the element to insert: ");
  scanf("%d", &x);

  insertAtEnd(arr, &n, x);

  if (n < sizeof(arr) / sizeof(arr[0])) { // Check if insertion was successful
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }

  return 0;
}
