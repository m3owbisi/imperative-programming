#include <stdio.h>

int myPow(int base, int exponent) {
  int result = 1;

  // Handle negative exponents (optional)
  if (exponent < 0) {
    printf("Error: Negative exponents not supported.\n");
    return -1; // Indicate error (optional)
  }

  // Handle exponent of 0 (base can be anything)
  if (exponent == 0) {
    return 1;
  }

  // Repeated multiplication for positive exponents
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }

  return result;
}

int main() {
  int base, exp;

  printf("Enter the base number: ");
  scanf("%d", &base);
  printf("Enter the exponent: ");
  scanf("%d", &exp);

  int power = myPow(base, exp);

  if (power != -1) { // Check for error from function (optional)
    printf("%d raised to the power of %d is %d\n", base, exp, power);
  }

  return 0;
}
