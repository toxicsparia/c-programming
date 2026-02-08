#include <stdio.h>

int main(void) {
    int marks;
    printf("Enter your marks (0-100): \n");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (marks < 0 || marks > 100) {
        printf("Invalid mark\n");
    } else if (marks >= 30) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    printf("thank you\n");

    return 0;
}