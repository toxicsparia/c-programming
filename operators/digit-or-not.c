#include<stdio.h>

//this is a program to check that the given number is a digit or not

int main() {
    int x, z;
    printf("Enter your number to check it's a digit or not\n");
    scanf("%d", &x);
    z = x >= 0 && x <= 9;
    printf("1 means digit & 0 means not digit\n");
    printf("Your number %d is a : %d\n", x, z);
return 0;
}