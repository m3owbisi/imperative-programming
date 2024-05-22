#include <stdio.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Array to store alphabets
    int n = sizeof(alphabet) - 1; // Calculate array length (excluding null terminator)
    char *ptr = alphabet; // Pointer to the first element of the array

    // Print the alphabets in uppercase
    printf("Uppercase alphabets:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", *ptr++); // Print current character, then increment pointer
    }
    printf("\n");

    // Print the alphabets in lowercase (optional)
    ptr = alphabet; // Reset pointer to the beginning

    printf("Lowercase alphabets:\n");
    for (int i = 0; i < n; i++) {
        // Convert character to lowercase using ASCII manipulation (optional)
        printf("%c ", *ptr + 32); // Add 32 to ASCII value for lowercase conversion
        ptr++;
    }
    printf("\n");

    return 0;
}
