#include <stdio.h>

int main() {
    float radius;
    printf("Enter the radius here: \n");
    scanf("%f", &radius);
    printf("The volume of sphare is: %.2f \n", 4.0/3.0*3.14*radius*radius*radius);
    return 0;
}