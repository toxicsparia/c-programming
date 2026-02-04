#include<stdio.h>

int main() {
    /*
    I am writing this code without using if else.
    we are inputting a & b from user.
    Logic explanation
    I have made 2 swich x and y  
    In the switch x = if a < b then it will be true and the output will be 1; 
    and the switch y = it will be false and the output will be 0;
    e.g: a = 5, b = 7;
    x = 5<7;  and this statement is true then it will be return 1;
    y = 7<=5; and this statement is false then it will be return 0;
    now we can say - x = 1; y = 0
    Now if we do a small mathematics here: a*x+b*y; 5*1+7*0; 5+0 ; 5 the final output is 5 & this is our smallest number.

    */
    float a, b, x, y;
    printf("Enter your 1st number:\n");
    scanf("%f", &a);
    printf("Enter your 2nd number:\n");
    scanf("%f", &b);
    //now applying the formula
    x = a < b;
    y = b <= a;
    printf("The smallest number is: %.2f \n", a*x+b*y);
    /*
    a*y+b*x this mathematical change will print the biggest number remain the every step same.
    */
return 0;
}