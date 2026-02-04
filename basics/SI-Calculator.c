#include <stdio.h>

int main() {
    float principal, rate, time;
    printf("Enter the principal amount here:\n");
    scanf("%f", &principal);
    printf("Enter the rate of interest here (p.a)\n");
    scanf("%f", &rate);
    printf("Enter the time here:\n");
    scanf("%f", &time);
    printf("The simple interest is: %.2f\n", principal*rate*time/100);
    return 0;
}