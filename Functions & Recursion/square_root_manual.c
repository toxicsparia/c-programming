//Write a function to find square root of a number.
#include <stdio.h>

long double sroot(long double n);
long double sroot(long double n){
    long double guess = n / 2.0;
    long double temp=0.0;
    long double precision = 0.000001;
    while(guess - temp > precision || temp - guess > precision){
        temp = guess;
        guess = (temp + n/temp) / 2.0;
    }
    return guess;
}
int main(){
    long double n;
    while(1){
    printf("Enter a number: ");
    if(scanf("%Lf", &n) != 1){
        printf("Invalid input\n");
        while(getchar() != '\n');
        continue;
    }
    else if(n<0){
        printf("Please enter a positive number\n");
        continue;
    }
    break;
}   printf("The square root of %.2Lf is: %.6Lf", n, sroot(n));
return 0;
}