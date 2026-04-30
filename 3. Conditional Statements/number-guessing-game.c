/*
7. Simple Number Guessing Game Logic
o Predefined secret number (e.g., 50)
o User guesses the number
o Give hints: "Too high", "Too low", or "Correct!"
*/
#include <stdio.h>

int main(){
    int num, secret_num;
    secret_num = 50;
    printf("Enter a number: \n");
    if(scanf("%d", &num) != 1){
        printf("Invalid input \n");
        return 1;
    }
    if(num == secret_num){
        printf("correct");
    }
    else if(num >= 45 && num <= 55){
        printf("Very close \n");
    }
    else if(num > secret_num){
        printf("Too high \n");
    }
    else{
        printf("Too low \n");
    }
return 0;
}
