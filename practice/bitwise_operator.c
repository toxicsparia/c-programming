// 1.	Write a program to check if a number is even or odd using the bitwise AND (&) operator instead of the modulo (%) operator.
#include <stdio.h>

int get_num(); // creating a function for getting input;
void check(int num); // operation

int main(){
    // using two variables for prevent from deciaml inputs..
    float y;
    int x;
    while(1){
        int num = get_num(); // calling get num function to get the input
        check(num);
        // adding a menu for reuse.
        while(1){
            printf("[1] Run Again\n[0] Exit\nEnter: ");
            if(scanf("%f", &y) != 1){  // input validation
                printf("Invalid input\n");
                while(getchar() != '\n');
                continue;
            }
            x = y; // decimal prevent..
            if(x!=y){
                printf("Please enter a valid input\n");
                while(getchar() != '\n');
                continue;
            }
            if(x<0 || x>1){
                printf("Invalid input\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        }
        if(x==0){
            break;
        }
    }
    return 0;
}

int get_num(){
    float x;
    int num;
    while(1){
        printf("Enter a number: ");
        if(scanf("%f", &x) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        num = x;
        if(num != x){
            printf("Please enter an integer number\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    return num;
}

void check(int num){
    if(num&1){ // if this return 1 then this will be an odd number and if returns 0 then it would be even;
        printf("\n%d is an odd number\n\n", num);
    }
    else{
        printf("\n%d is an even number\n\n", num);
    }
}