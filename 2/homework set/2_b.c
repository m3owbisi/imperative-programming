#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Get a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch); // Add a space before %c to avoid issues with newline

    // Check if the character is a digit using isdigit()
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}
