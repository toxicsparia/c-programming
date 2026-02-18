// write a program to prrint prime numbers in range;
#include <stdio.h>

int main(){
    float from, to;
    printf("From: ");
    if(scanf("%f", &from)!=1){
        printf("Invalid input\n");
        return 1;
    }
    printf("To: ");
    if(scanf("%f", &to)!=1){
        printf("Invalid input\n");
        return 1;
    }
    int From=from;
    int To=to;
    if(From!=from||To!=to){
        printf("Decimal! please enter natural numbers (whole number)\n");
        return 1;
    }
    if(From<=1||To<=1){
        printf("Please enter greater than 1\n");
        return 1;
    }
    if(From>=To){
        printf("From must be smaller or != To\n");
        return 1;
    }
    for(From;From<=To;From++){
        int count=0;
        for(int i=1;i<=From;i++){
            if(From%i==0){
                count++;
            }
        }
            if(count==2){
            printf("%d: prime\n", From); 
            }
        } 
return 0;
}