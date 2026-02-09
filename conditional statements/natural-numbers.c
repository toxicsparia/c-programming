//write a program to check if the given number is a natural number or not.
#include <stdio.h>

int main(void){
    float x;
    printf("Enter a number to check if is it a natural number or not: \n");
if(scanf("%f", &x) != 1){//if scanf return 0 than the statement will be true and the code will be stopped..
    printf("invalid input\n");
    return 1;
}
else if(x <= 0){
    printf("This isn't a natural number (negative number or 0) \n");
    return 1;
}
// 16 to 18 line will handle with the decimal numbers.
int temp;
temp = x; // putting float value into an int variable. This will cut off the decimals number... e.g if user enter 1.5 then the temp will store only 1 and cut off the .5
if(x == temp){//1 != 5 then this statement will be false and the else statements will be print....
    printf("This is a natural number. \n");
}
else{
    printf("This isn't a natural number \n");
}
return 0;
}