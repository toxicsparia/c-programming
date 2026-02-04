#include<stdio.h>

int main() {
    int value;
    printf("Write a number to check the number is divisible by 2 or not.\n");
    scanf("%d", &value);
    /*
    if divisible by 2 = 1
    else 0
    */
    printf("%d \n", value%2 == 0);
return 0;
}