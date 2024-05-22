#include <stdio.h>

void removeSpaces(char str[]) {
  int j = 0; // Index for the new string without spaces
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != ' ') {
      str[j++] = str[i]; // Copy non-space characters
    }
  }
  str[j] = '\0'; // Add null terminator at the end of the new string
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // Use fgets for safer input

  printf("Original string: %s\n", str);

  removeSpaces(str);

  printf("String after removing spaces: %s\n", str);

  return 0;
}
