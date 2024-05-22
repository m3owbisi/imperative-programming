#include <stdio.h>
#include <ctype.h> // For tolower and toupper functions

void convertVowels(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    char ch = str[i];
    if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
      str[i] = toupper(ch);
    }
    i++;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin); // Use fgets for safer input handling

  convertVowels(str);

  printf("String after converting lowercase vowels to uppercase: %s\n", str);

  return 0;
}
