#include <stdio.h>

int main() {
    float length, width;
    printf("Enter the length of the rectangle\n");
    scanf("%f", &length);
    printf("Enter the width of the rectangle\n");
    scanf("%f", &width);
    printf("The perimeter of the rectangle is: %.2f \n", 2*(length+width));
    return 0;
}