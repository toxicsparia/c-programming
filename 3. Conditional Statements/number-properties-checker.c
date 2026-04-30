/*
6. Number Properties Checker
o Take a number as input
o Check if it's: positive/negative/zero, even/odd, single-digit/multi-digit;
o Display all properties in one output
*/
#include <stdio.h>

int main(){
    float num;
    printf("Enter your number: \n");
    if(scanf("%f", &num) != 1){
        printf("Please enter a valid number. \n");
        return 1;
    }
    int num1;
    num1 = num;
    int x;
    x = num1 % 2;
    if(num1 != num){
        printf("decimal numbers are not allowed, please enter a integer number \n");
        return 1;
    }
    if(num1 == 0){
        printf("Zero, single digit, even \n");
    }
    else if(num1 > 0 && num1 <= 9){
        if(x == 0){
            printf("%d: positive, even, single digit \n", num1);
        }
        else{
            printf("%d: positive, odd, single digit \n", num1);
        }
    }
    else if(num1 >= 10){
        if(x == 0){
            printf("%d: positive, even, multi digit \n", num1);
        }
        else{
            printf("%d: positive, odd, multi digit \n", num1);
        }
    }
    else if(num1 < 0 && num1 >= -9){
        if(x == 0){
        printf("%d: negative, even, single digit \n", num1);
        }
        else{
            printf("%d: negative, odd, single digit \n", num1);
        }
    }
    else if(num1 <= -10){
        if(x == 0){
        printf("%d: negative, even, multi digit \n", num1);
        }
        else{
            printf("%d: negative, odd, multi digit \n", num1);
        }
    }
return 0;
}