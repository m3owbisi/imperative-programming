#include <stdio.h>

int countOccurrences(int arr[], int n, int x) {
  int count = 0;

  // Iterate through the array
  for (int i = 0; i < n; i++) {
    // Check if the current element is equal to the target number
    if (arr[i] == x) {
      count++;
    }
  }

  return count;
}

int main() {
  int arr[] = {1, 2, 3, 1, 2, 4, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x;

  printf("Enter the number to search: ");
  scanf("%d", &x);

  int occurrences = countOccurrences(arr, n, x);

  printf("The number %d occurs %d times in the array.\n", x, occurrences);

  return 0;
}
