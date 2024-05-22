#include <stdio.h>
#include <ctype.h> // For tolower and toupper functions

void swapCase(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) { // Check if character is alphabetic
      str[i] = (islower(str[i])) ? toupper(str[i]) : tolower(str[i]);
    }
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // Use fgets for safer input

  printf("Original string: %s\n", str);

  swapCase(str);

  printf("String after swapping case: %s\n", str);

  return 0;
}
