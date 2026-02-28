//Write a function to find sum of digits of a natural number.
#include <stdio.h>

int sum(int number);
int sum(int number){
    if(number >= 0 && number <= 9){
        return number;
    }
    int sum_of_digit = number%10 + sum(number/10);
   
    return sum_of_digit;
}
int main(){
    int number;
    while(1){
    printf("Enter a natural number: ");
    if(scanf("%d",&number) != 1){
        printf("Invalid number\n");
        while(getchar() != '\n');
        continue;
    }
    else if(number<0){
        printf("Negative: Enter a natural number\n");
        continue;
    }
    break;
}
        printf("Sum of %d N  = %d", number, sum(number));
    return 0;
}