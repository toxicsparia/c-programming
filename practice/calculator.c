// Write a simple menu-driven calculator using a switch statement that can add, subtract, multiply, or divide two numbers.

#include <stdio.h>

void get_input(float operand[], char *op);
float calc(float operand[], char op);

int main(){
    float operand[2];
    char op;
    get_input(operand, &op); // call the fuction by reference...
    float ans = calc(operand, op); // call the function...
    if(op == '/' && operand[1] == 0){ // hendaling divided by zero
        printf("Error: Devided by zero..\n");
    }
    else{
        printf("Answer: %.2f %c %.2f = %.2f\n", operand[0], op, operand[1], ans); // printing the final result..
    }
        return 0;
}

void get_input(float operand[], char *op){
    while(1){
        printf("Enter operand 1: ");
        // getting input from the user and storing into the operand array...
        if(scanf("%f", &operand[0]) != 1){ // input validation....
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(getchar() != '\n'){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    while(1){
        printf("Enter operator: ");
        if(scanf(" %c", op) != 1){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        // If the user types other then the selected operators then this if statement will run...
        if(*op != '+' && *op != '-' && *op != '*' && *op != '/'){
            printf("Please enter (+, -, * or /) operator\n");
            while(getchar() != '\n');
            continue;
        }
        if(getchar() != '\n'){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    while(1){
        // The next input and same input validation to get the right value...
        printf("Enter operand 2: ");
        if(scanf("%f", &operand[1]) != 1){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(getchar() != '\n'){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
}

float calc(float operand[2], char op){
    // using switch to perform the operation..
    float ans;
    switch(op){
        case '+': ans = operand[0] + operand[1];
        break;
        case '-': ans = operand[0] - operand[1];
        break;
        case '*': ans = operand[0] * operand[1];
        break;
        case '/': ans = operand[0] / operand[1];
        break;
    }
    return ans;
}