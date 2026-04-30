//Write a function to find square root of a number.
#include  <stdio.h>
#include <math.h>

    long double sroot(long double n);
    long double sroot(long double n){
    return sqrt(n);
}
int main(){
    long double n;
    while(1){
    printf("Enter a positive number: ");
    if(scanf("%Lf", &n) != 1){
        printf("Invalid input\n");
        while(getchar() != '\n');
        continue;
    }
    else if(n<0){
        printf("Please enter a positive number.\n");
        continue;
    }
    break;
}
    printf("The square root of %.2Lf is: %.2Lf\n", n, sroot(n));
    return 0;
}
