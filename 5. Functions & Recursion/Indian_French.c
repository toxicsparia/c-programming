//write a function that print "Namaste" if the user is Indian and "Bonjour" if the user is French;
#include <stdio.h>

void India();//creating 2 functions
void French();
int main(){
    float number; //declaring variables
    int num;
    while(1){ //infinite loop for runs the program till the program execution successfully.
    printf("Enter 1 or 2\n");
    printf("1. India\n");
    printf("2. French\n");
    if(scanf("%f", &number) != 1){//input validation characters or symbols.
        printf("invalid input\n");
        while(getchar() != '\n');//clearing buffering values
        continue;
    }
    num=number;//input validation decimal, less than or greater than 2
    if(num<1 || num>2 || num != number){
        printf("Invalid input\n");
        continue;
    }
    break;//breaking the infinite loop;
}
    if(num==1){
        India();//funtion call
    }
    else{
        French();
    }
    return 0;
}
//deffination
void India(){
    printf("Namaste\n");
}
void French(){
    printf("Bonjour\n");
}