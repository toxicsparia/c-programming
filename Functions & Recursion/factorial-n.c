// Factorial of n;
#include <stdio.h>

//declaration/prototype;
int factorial(int n);

//definition;
int factorial(int n){
    //THE BASE CASE: The stopping condition. 
    //without this, the function would call itself forever and crash.
    if(n == 0){
        return 1;
    }
    //THE RECURSIVE CALL: The function calls ITSELF with a smaller number (n-1).
    // The program pauses here and waits for factorial(n-1) to finish and give an answer.
    int update = factorial(n - 1); 
    
    //THE WORK: Once the smaller answer comes back, multiply it by the current 'n'.
    int multi = update * n; 
    
    //THE RETURN: Send this new answer back to whoever called it.
    return multi;
}

int main(){
    float N;
    int n;
    
    //An infinite loop to keep asking until the user gives valid input
    while(1){
        printf("Enter a number to check factorial: ");
        
        //Check if the input is a valid number
        if(scanf("%f", &N) != 1){
            printf("Invalid input\n");
            //Clearing the input buffer
            while(getchar() != '\n');
            continue; //Go back to the start of the while loop
        }
        
        n = N; //Convert the float to an integer
        
        //Validation: Factorials are for positive integers.
        if(n < 0 || n != N){
            printf("Invalid input\n");
            continue;
        }
        
        //Break the loop.
        break;
    }
    
    // Call the recursive function and print the result
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}