// Write a program that prompts the user for a number n and prints a right-angled triangle pattern of * with n rows using nested loops.
#include <stdio.h>

int get_input();
void pattern(int n);

int main(){
    int n = get_input();
    pattern(n);
    return 0;
}

int get_input(){
    int n;
    while(1){
        printf("Enter a number: ");
        if(scanf("%d", &n) != 1){
            printf("Error: Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(n<1 || getchar() != '\n'){
            printf("Error: Enter a positive integer value\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    return n;
}

void pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}