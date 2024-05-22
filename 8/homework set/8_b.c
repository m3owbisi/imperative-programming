#include <stdio.h>
#include <ctype.h> // For tolower functionality

int main() {
    char str[100];
    int char_frequencies[256] = {0}; // Initialize frequency array to 0s
    int max_freq = 0;
    char highest_freq_char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string with safer fgets

    // Convert all characters to lowercase for case-insensitive counting
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]); // Convert to lowercase
    }

    // Count character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        char_frequencies[(int)str[i]]++;
    }

    // Find the character with the highest frequency
    for (int i = 0; i < 256; i++) {
        if (char_frequencies[i] > max_freq) {
            max_freq = char_frequencies[i];
            highest_freq_char = (char)i; // Cast integer index back to character
        }
    }

    // Handle cases where multiple characters have the same highest frequency
    int num_highest_freq_chars = 0;
    for (int i = 0; i < 256; i++) {
        if (char_frequencies[i] == max_freq) {
            num_highest_freq_chars++;
        }
    }

    if (num_highest_freq_chars > 1) {
        printf("Multiple characters have the highest frequency (%d):\n", max_freq);
        for (int i = 0; i < 256; i++) {
            if (char_frequencies[i] == max_freq) {
                printf("%c ", (char)i);
            }
        }
        printf("\n");
    } else {
        printf("The highest frequency character is '%c' (appears %d times).\n", highest_freq_char, max_freq);
    }

    return 0;
}
