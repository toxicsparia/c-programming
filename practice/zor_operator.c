// Write a C Program to Swap Two Integer Numbers Using Bitwise operator.
#include <stdio.h>

void get_value(int *a, int *b);

int main(){
    /*zor opereator cancle outs the same number like - 
    1^1 = 0;    0^0 = 0;    0^1 = 1;    1^0 = 1;
    we can see the pattern here...*/
    int a, b;
    get_value(&a, &b); // call by reference...
    a = a^b; // now this containts both value a and b...
    b = a^b; // now.. b = (a^b)^b.. cuz the value of a is a^b.. now this will cancle out the b... cuz a^b^b.. b^b = 0.. so b = a...
    a = a^b; // now.. a = (a^b)^a.. cuz (a) containts a^b and  b containts the original a.. so a^a = 0 and remain the b.. so a = b....
    //  notice.. the program is completed successfully as finally b = a and a  = b... the numbers are swapped...
    printf("A = %d\tB = %d\n", a, b);
    return 0;
}

void get_value(int *a, int *b){
    while(1){
        printf("\nEnter A: ");
        // storing the value in the pointer a..
        if(scanf("%d", a) != 1){
            printf("Invalid input, Try again\n");
            while(getchar() != '\n'); // this will clear the buffer..
            continue;
        }
        //checking for the decimals value.. age getchar() will instantly grab the first character from the buffer.. 
        // and if there's a decimal symbol or space then the if condition would be triggered. the next character should be '\n'...
        if(getchar() != '\n'){
            printf("Invalid input, Input an integer value\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    while(1){
        printf("\nEnter B: ");
        if(scanf("%d", b) != 1){
            printf("Invalid input, Try again\n");
            while(getchar() != '\n');
            continue;
        }
        if(getchar() != '\n'){
            printf("Invalid input, Input an integer value\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
}