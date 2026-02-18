// write a program to check if the given number is prime or not;
#include <stdio.h>

int main(){
    float n;
    printf("Enter a number to check prime or not: ");
    if(scanf("%f", &n)!=1){
        printf("Invalid input\n");
        return 1;
    }
    int N=n, p, count=0;
    if(N!=n){
        printf("Decimal! please enter natural numbers (whole number)\n");
        return 1;
    }
    if(N<=0){
        printf("Negative! please enter natural numbers greater than 1\n");
        return 1;
    }
    for(int i=1; i<=N; i++){
        if(N%i==0){
            count+=1;
        }
    }
    count==2?printf("%d is a prime numer. \n", N):printf("%d isn't a prime number.\n", N);
return 0;
}