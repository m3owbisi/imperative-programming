#include <stdio.h>
#include <math.h> // For sqrt() function

double findSqRt(double num) {
  // Check for non-negative numbers (sqrt is not defined for negative numbers)
  if (num < 0) {
    printf("Error: Square root is not defined for negative numbers.\n");
    return -1.0; // Indicate error (optional)
  }

  return sqrt(num);
}

double findSquareRoot(double num) {
  // Handle negative numbers (optional)
  if (num < 0) {
    printf("Error: Square root is not defined for negative numbers.\n");
    return -1.0; // Indicate error (optional)
  }

  double guess = 1.0, epsilon = 0.00001; // Initial guess and precision

  // Improve the guess iteratively
  while (fabs(guess * guess - num) > epsilon) {
    guess = (guess + num / guess) / 2.0;
  }

  return guess;
}

int main() {
  double number;

  printf("Enter a non-negative number: ");
  scanf("%lf", &number);

  double root = findSqRt(number);

  if (root != -1.0) { // Check for error from function (optional)
    printf("Square root of %.2lf is %.2lf\n", number, root);
  }

  double num;

  printf("Enter a non-negative number: ");
  scanf("%lf", &num);

  double root1 = findSquareRoot(num);

  if (root1 != -1.0) { // Check for error from function (optional)
    printf("Square root of %.2lf is approximately %.2lf\n", num, root1);
  }

  return 0;
}
