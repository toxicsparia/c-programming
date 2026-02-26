//write a function to print n'th terms of fibonacci sequence;
#include <stdio.h>

int fibonacci(int n) {
    //the stopping point
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

int main() {
    int n;
    while(1) {
        printf("Enter a position to get that Fibonacci number: ");
        if(scanf("%d", &n) != 1) { 
            printf("Invalid input\n");
            // Clear the input buffer so it doesn't loop infinitely on bad input;
            while(getchar() != '\n'); 
            continue;
        }
            if(n<0){
            printf("Please enter a positive whole number\n");
            continue;
        }
        break;
    }
    
    printf("The Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}