//Write a C program to convert Celsius to Fahrenheit and vice versa;
#include <stdio.h>

int main(){
    int num;
    float temp;
    printf("Enter 1 for Celsius to Fahrenheit.\n");
    printf("Enter 2 for Fahrenheit to Celsius.\n");
    if(scanf("%d", &num) != 1){
        printf("Invalid Input\n");
        return 1;
    }
    if(num<1 || num>2){
        printf("Please enter a valid input (1 or 2)\n");
        return 1;
    }
    printf("Enter tempreture\n");
    if(scanf("%f", &temp) != 1){
        printf("Invalid input\n");
        return 1;
    }
    if(num==1){
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, temp*9/5+32);
    }
    else{
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp,  (temp-32)*5/9);
    }
    return 0;
}