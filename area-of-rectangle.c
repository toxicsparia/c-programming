#include <stdio.h>

int main() {
    float length, width;
    printf("Enter the length \n");
    scanf("%f", &length);
    printf("Enter the width here \n");
    scanf("%f", &width);
    printf("The are of rectangle is: %.2f", length*width);
    return 0;
}