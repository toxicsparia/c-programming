#include<stdio.h>

int main() {
    int x, y, z;
    printf("Enter the number 1:\n");
    scanf("%d", &x);
    printf("Enter the number 2:\n");
    scanf("%d", &y);
    printf("Enter the number 3:\n");
    scanf("%d", &z);
    float avg;
    avg = ((x+y+z)/3.0);
    printf("The average of the 3 number you type (%d, %d, %d) is : %.2f\n", x, y, z, avg);
return 0;
}