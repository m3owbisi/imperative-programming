#include <stdio.h>

int main() {
    // Declare an array to store marks of 30 students
    float marks[30];

    // Input marks for each student
    for (int i = 0; i < 30; ++i) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Display the entered marks
    printf("\nMarks of 30 students:\n");
    for (int i = 0; i < 30; ++i) {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }

    return 0;
}
