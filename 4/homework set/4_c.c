#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_COURSE_LENGTH 30
#define NUM_STUDENTS 5

struct Student {
    char name[MAX_NAME_LENGTH];
    float marks;
    float cgpa;
    char course[MAX_COURSE_LENGTH];
};

int main() {
    FILE *fptr;
    char filename[50];
    struct Student students[NUM_STUDENTS];

    // Get the filename from the user
    printf("Enter the filename: ");
    fgets(filename, sizeof(filename), stdin);

    // Remove the newline character from the filename (optional)
    filename[strcspn(filename, "\n")] = '\0';

    // Open the file for writing
    fptr = fopen(filename, "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error! Could not open file '%s' for writing.\n", filename);
        return 1;
    }

    // Header row
    fprintf(fptr, "%-20s %10s %10s %20s\n", "Name", "Marks", "CGPA", "Course");

    // Get student information from the user
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter student %d details:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // Consume newline character left by scanf
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        getchar(); // Consume newline character left by scanf
        printf("Course: ");
        fgets(students[i].course, MAX_COURSE_LENGTH, stdin);
        students[i].course[strcspn(students[i].course, "\n")] = '\0'; // Remove newline
    }

    // Print student information in table format
    for (int i = 0; i < NUM_STUDENTS; i++) {
        fprintf(fptr, "%-20s %10.2f %10.2f %20s\n",
                students[i].name, students[i].marks, students[i].cgpa, students[i].course);
    }

    printf("Student information written to '%s'\n", filename);

    // Close the file
    fclose(fptr);

    return 0;
}
