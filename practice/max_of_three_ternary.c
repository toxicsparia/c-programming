// 3.	Write a program that finds the maximum of three numbers using only the ternary (?:) operator.
#include <stdio.h>

// I am declaring a function prototype to scanning or getting the input from the user...
void get_in(int *a, int *b, int *c);

int main(){
    // declaring the variable that I need to do this program... max to store the maximum value.. and three int variable to storing the input..
    int max, a, b, c;
    // calling the function..
    get_in(&a, &b, &c);
    // logic...
    max = a>b? ((a>c)? a:c) : ((b>c)? b:c);
    printf("The largest number is %d.", max);
    return 0;
}

void get_in(int *a, int *b, int*c){
    // using infinite loop... for reuse..
    while(1){
        printf("Enter 3 value separated by space: ");
        // inputing 3 value....
        if(scanf("%d%d%d", a, b, c) != 3){ // If the scanf() didn't get 3 success value then the if block will open...
            printf("Invalid input\n");
            while(getchar() != '\n'); // buffer retains...
            continue;
        }
        // if the users enters any extra values.. like space or abc or 123.. anything instead of enter.. then this if block will open..
        if(getchar() != '\n'){
            printf("Please enter correct value\n");
            while(getchar() != '\n'); // buffer retains....
            continue;
        }
        // done.. now breaking the loop.....
        break;
    }
}