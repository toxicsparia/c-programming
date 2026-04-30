#include<stdio.h>

int main() {
    // This program is for checking the number is odd or even.
    int no;
    printf("Enter the number: \n");
    scanf("%d", &no);
    /*
    0 = odd
    1 = even
    */
    printf("If the program print 1 then it's a even number else it's an odd number\n");
    printf("%d\n", no%2 == 0);
    return 0;
}