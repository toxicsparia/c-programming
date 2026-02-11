#include <stdio.h>

int main(){
    float op1, op2;
    printf("Enter operand 1 \n");
    if(scanf("%f", &op1) != 1){
        printf("invalid input (please enter an int or float value) \n");
        return 1;
    }
    printf("Enter operand 2 \n");
    if(scanf("%f", &op2) != 1){
        printf("invalid input (please enter an int or float value) \n");
        return 1;
    }
    printf("Enter a operator that you wanna perform between operand %.2f & %.2f \n", op1, op2);
    printf("(+, -, * and /) operator only \n");
    char op;
    scanf(" %c", &op);
    if(op == '+'){
            printf("%.2f + %.2f = %.2f \n", op1, op2, op1+op2);
        }
    else if(op == '-'){
            printf("%.2f - %.2f = %.2f \n", op1, op2, op1-op2);
        }
    else if(op == '*'){
            printf("%.2f * %.2f = %.2f \n", op1, op2, op1*op2);
        }
    else if(op == '/' && op2 == 0){
            printf("cannot divide by 0 \n");
        }
    else if(op == '/'){
            printf("%.2f / %.2f = %.2f \n", op1, op2, op1/op2);
        }
    else{
        printf("invalid input (please enter only +, -, * or /)\n");
    }
return 0;
}