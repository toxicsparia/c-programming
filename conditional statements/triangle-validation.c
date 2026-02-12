#include<stdio.h>
/*
Triangle Validity
o Take three sides of a triangle as input
o Check if they can form a valid triangle (sum of any two sides > third side)
o Also determine the type: equilateral, isosceles, or scalene
*/
int main(){
    float a, b, c;
    printf("Enter the 'a' value \n");
    if(scanf("%f", &a) != 1){
        printf("This is an invalid input \n");
        return 1;
    }
    printf("Enter the 'b' value \n");
    if(scanf("%f", &b) != 1){
        printf("This is an invalid input \n");
        return 1;
    }
    printf("Enter the 'c' value \n");
    if(scanf("%f", &c) != 1){
        printf("This is an invalid input \n");
        return 1;
    }
    if(a <= 0 || b <= 0 || c <= 0){
        printf("Please enter a positive or non zero number \n");
        return 1;
    }
    if((a + b) > c && (a + c) > b && (b + c) > a){
        printf("This is a valid triangle \n");
    }
    else{
        printf("This is an invalid triangle \n");
        return 1;
    }
    if(a == b && a == c){
        printf("Type : equilateral triangle \n");
    }
    else if((a == b && b != c) || (a == c && c != b) || (b == c && c != a)){
        printf("Type : isosceles triangle \n");
    }
    else if(a != b && a != c){
        printf("Type : scalene triangle \n");
    }
return 0;
}