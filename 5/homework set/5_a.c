#include <stdio.h>

int sumOfDigits(int num) {
  int sum = 0, remainder;

  // Handle negative numbers (optional)
  if (num < 0) {
    printf("Error: Negative numbers not allowed.\n");
    return -1; // Indicate error (optional)
  }

  // Extract and add digits until number becomes zero
  while (num != 0) {
    remainder = num % 10;
    sum += remainder;
    num /= 10;
  }

  return sum;
}

int main() {
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);

  int digitSum = sumOfDigits(number);

  if (digitSum != -1) { // Check for error from function (optional)
    printf("Sum of digits of %d is: %d\n", number, digitSum);
  }

  return 0;
}
