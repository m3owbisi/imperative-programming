#include <stdio.h>
#include <string.h>

// Structure for storing student information
struct Student {
    char name[50];
    int roll_number;
    float marks[6]; // Array to store marks for 6 subjects (adjust as needed)
    float cgpa;
    int attendance[30]; // Array to store attendance for 30 days (adjust as needed)
};

// Structure for storing teacher information
struct Teacher {
    char name[50];
    char department[50];
    char subjects[100]; // String to store subjects taught (comma-separated)
};

// Structure for storing staff information
struct Staff {
    char name[50];
    char designation[50];
    char department[50];
};

// Function to calculate CGPA (assuming equal weightage for all subjects)
float calculateCGPA(struct Student *student) {
    float total_marks = 0;
    for (int i = 0; i < sizeof(student->marks) / sizeof(student->marks[0]); i++) {
        total_marks += student->marks[i];
    }
    return total_marks / (sizeof(student->marks) / sizeof(student->marks[0]));
}

// Function to mark attendance (replace with actual attendance tracking logic)
void markAttendance(struct Student *student, int day) {
    student->attendance[day - 1] = 1; // Mark present for the given day (day-1 for zero-based indexing)

    printf("Enter attendance status (present: 1, absent: 0): ");
    int status;
    scanf("%d", &status);

    if (status == 1 && day >= 1 && day <= 30) { // Validate day
        student->attendance[day - 1] = 1;
    } else {
        printf("Invalid attendance status or day.\n");
    }

}

// Sample functions to add, display, and search for students/teachers/staff (implement details)
void addStudent(struct Student *students, int *num_students) {
    // Implement logic to get student details and add to the students array
    // Update num_students to reflect the new student
    if (*num_students >= sizeof(students) / sizeof(students[0])) {
        printf("Error: Maximum student capacity reached.\n");
        return;
    }

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", students[*num_students].name);
    printf("Roll Number: ");
    scanf("%d", &students[*num_students].roll_number);

    // Get marks for each subject (adjust loop based on number of subjects)
    for (int i = 0; i < sizeof(students[*num_students].marks) / sizeof(students[*num_students].marks[0]); i++) {
        printf("Marks for subject %d: ", i + 1);
        scanf("%f", &students[*num_students].marks[i]);
    }

    // Calculate CGPA initially (assuming all marks are entered)
    students[*num_students].cgpa = calculateCGPA(&students[*num_students]);

    // Initialize attendance to absent for all days
    memset(students[*num_students].attendance, 0, sizeof(students[*num_students].attendance));

    (*num_students)++; // Increment student count
}

void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("CGPA: %.2f\n", student.cgpa);
    // Print marks and attendance (optional)
}

void addTeacher(struct Teacher *teachers, int *num_teachers) {
    // Implement logic to get teacher details and add to the teachers array
    // Update num_teachers to reflect the new teacher
}

void displayTeacher(struct Teacher teacher) {
    printf("Name: %s\n", teacher.name);
    printf("Department: %s\n", teacher.department);
    printf("Subjects Taught: %s\n", teacher.subjects);
}

// Similar functions can be implemented for staff

int main() {
    // Declare arrays to store students, teachers, and staff (adjust sizes as needed)
    struct Student students[100];
    int num_students = 0;

    struct Teacher teachers[50];
    int num_teachers = 0;

    struct Staff staff[20];
    int num_staff = 0;

    int choice, student_index, teacher_index, staff_index;
    float marks;
    int day;

    while (1) {
        printf("\nCOLLEGE INFORMATION SYSTEM\n");
        printf("1. Add Student\n");
        printf("2. Display Student Information\n");
        // Add options for other functionalities (search, calculate CGPA, etc.)
        printf("3. Add Teacher\n");
        printf("4. Display Teacher Information\n");
        // Add options for staff functionalities
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &num_students);
                break;
            case 2:
                printf("Enter roll number of student: ");
                scanf("%d", &student_index);
                if (student_index < 0 || student_index >= num_students) {
                    printf("Invalid student index.\n");
                } else {
                    displayStudent(students[student_index]);
                }
                break;
            // Implement cases for other functionalities
            case 3:
                addTeacher(teachers, &num_teachers);
                break;
            case 4:
                printf("Enter name of teacher: ");
                scanf("%s", teachers);
        }
        return 0;
}