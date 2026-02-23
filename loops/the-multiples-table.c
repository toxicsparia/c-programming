/*Write a program that takes an integer input from the user and prints its multiplication table from 1 to 10, but skip the number if the product is a multiple of 4.*/
#include <stdio.h>

int main() {
    float NUM;
    int num;
    printf("Enter your number: ");
    while(1){ //making an infinite loop for keep the program running till the user not typed a valid input.
    if(scanf("%f", &NUM) != 1){ //this statement checking if the user type a number or other thing like character, symbol;
        printf("Invalid input\n");
        printf("please enter a valid input: ");
        while(getchar() != '\n'); //this statement clear buffer value or previous inputed value from the user.
        continue; //this statement keep restart the if statement;
    }
    num=NUM;//if the user enter 1.5, NUM=1.5, if we input the NUM into the int num then the decimal will be cut off automatically so num=1. 1 != 1.5
    if(num!=NUM){ //decimal check
        printf("Decimal value: Please enter an integar value\n");
        continue;
    }
    if(num == 0){
        printf("0: isn't allowed\n");
        continue;
    }
    break;
}
    for(int i=1; i<=10; i++){//making a loop for get multipication.
        int j=num*i;//doing the multipication and put the value in the j variable
        if(j%4==0){//skipping the multiple of 4;
            continue;
        }
        printf("%d * %d = %d\n", num, i, j);
    }
    return 0;
}