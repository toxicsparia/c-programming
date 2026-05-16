// Write a program to print the Fibonacci series up to n terms using a for loop.
#include <stdio.h>

//declaring two prototype,, one to get the input from the user and another one to get and print the fibonacci.
int get_input();
void fib(int n);

int main(){
    int n = get_input(); // calling the fuction to get the value of n;
    fib(n); // calling the function to calculate and print the fibonacci value... passing the argumants..
    return 0;
}

int get_input(){
    int n;
    while(1){
        // scanning the value... and validity checking
        printf("Enter n: ");
        if(scanf("%d", &n) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        // checking if the number is less than 1;
        if(n<1){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    // returning the value;
    return n;
}

void fib(int n){
    // declaring 3 veriable,, a with 0 b with 1 and a temp veriable.
    int a = 0, b = 1, temp;
    // if the user enter n = 1.. then we need to just print the 1 value of fibonacci..
    if(n == 1){
        printf("Fibonacci: 1 = 0\n");
    }
    else{
        printf("Fibonacci: 1 = %d\nFibonacci: 2 = %d\n", a, b);
    }
    // we know that fibonacci starts with 0 and 1 and the next value is the sum of the value before it.. 
    // So I will start with 3 cause I have already declared fibonacci 1st and 2nd value manually..
    for(int i=3; i<=n; i++){
        // sum of a+b.. and storing into the temp veriable.
        temp = a+b;
        // then shifting the value of b into the a veriable.
        a = b;
        // then storing the current fibonacci value into the b veriable..
        b = temp;
        // now printing...
        printf("Fibonacci: %d = %d\n", i, temp);
    }
}