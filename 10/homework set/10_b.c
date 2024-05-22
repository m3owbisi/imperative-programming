#include <stdio.h>

#define MAX_STRING_LENGTH 100

int count_vowels(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for case-insensitive counting
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    FILE *fptr;
    char filename[50];
    char str[MAX_STRING_LENGTH];

    // Get the filename from the user
    printf("Enter the filename: ");
    fgets(filename, sizeof(filename), stdin);

    // Remove the newline character from the filename (optional)
    filename[strcspn(filename, "\n")] = '\0';

    // Open the file for reading
    fptr = fopen(filename, "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error! Could not open file '%s'\n", filename);
        return 1;
    }

    // Read the string from the file using fgets
    if (fgets(str, MAX_STRING_LENGTH, fptr) != NULL) {
        // Remove the newline character from the string (optional)
        str[strcspn(str, "\n")] = '\0';

        // Count the vowels
        int vowel_count = count_vowels(str);

        // Close the file (important before opening for writing)
        fclose(fptr);

        // Open the file for writing (overwrite mode)
        fptr = fopen(filename, "w");

        // Check if the file was opened for writing
        if (fptr == NULL) {
            printf("Error! Could not open file '%s' for writing.\n", filename);
            return 1;
        }

        // Write the vowel count to the file
        fprintf(fptr, "%d", vowel_count);

        printf("Vowel count written to '%s'\n", filename);
    } else {
        printf("Error! Could not read string from file.\n");
    }

    // Close the file again (opened for writing in the if block)
    fclose(fptr);

    return 0;
}
