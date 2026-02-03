#include <stdio.h>

int main() {
    float side;
    printf("Enter the value of one side of the square \n");
    scanf("%f", &side);
    printf("The area of the square is: %.2f \n", side*side);
    return 0;
}