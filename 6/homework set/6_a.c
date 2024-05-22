#include <stdio.h>

int main() {
    int fno, sno, *ptr1, *ptr2;

    // Get the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &fno);

    // Get the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &sno);

    // Assign addresses of fno and sno to pointers ptr1 and ptr2 respectively
    ptr1 = &fno;
    ptr2 = &sno;

    // Compare the values pointed to by ptr1 and ptr2 to find the maximum number
    if (*ptr1 > *ptr2) {
        printf("%d is the maximum number.\n", *ptr1);
    } else {
        printf("%d is the maximum number.\n", *ptr2);
    }

    return 0;
}
