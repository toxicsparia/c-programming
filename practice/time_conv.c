// 2.	Write a program that takes an integer representing total seconds
// and converts it into hours, minutes, and remaining seconds using arithmetic operators.
#include <stdio.h>

int get_sec();
void calc(int sec);

int main(){
    int x = 1;
    while(x==1){
        int second = get_sec();
        calc(second);

        //Run again;
        while(1){
            printf("[1] Run Again\n[0] Exit\n\nEnter: ");
            if(scanf("%d", &x) != 1){
                printf("Error: Please enter a valid input\n");
                while(getchar() != '\n');
                continue;
            }
            if(x != 1 && x != 0){
                printf("Error: Please select 0 or 1\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        }
    }
    return 0;
}

int get_sec(){
    int sec;
    while(1){
        printf("Enter sec: ");
        if(scanf("%d", &sec) != 1 || getchar() != '\n'){
            printf("Invalid Input\n");
            while(getchar() != '\n');
            continue;
        }
        if(sec<0){
            printf("Please enter a positive value\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    return sec;
}

void calc(int sec){
    int hours = sec/3600;
    int temp = sec%3600;
    int minutes = temp/60;
    int seconds = temp%60;
    printf("%d Seconds = %d Hours %d Minutes and %d Seconds.\n", sec, hours, minutes, seconds);
}