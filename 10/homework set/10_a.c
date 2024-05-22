#include <stdio.h>

#define MAX_STRING_LENGTH 100

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

        // Print the string to the user
        printf("String from the file: %s\n", str);
    } else {
        printf("Error! Could not read string from file.\n");
    }

    // Close the file
    fclose(fptr);

    return 0;
}
