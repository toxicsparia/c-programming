// 3.	Write a program that takes a single character input from the user and prints its corresponding ASCII integer value.
#include <stdio.h>

int main(){
    char ch;
    int temp;
    while(1){
        printf("Enter a character: ");
        if(scanf("%c", &ch)!=1){
            printf("Invalid input\n");
            while(getchar()!='\n');
            continue;
        }
        char buff = getchar();
        if(buff != '\n'){
            printf("Please enter a single character\n");
            while(getchar() != '\n');
            continue;
        }
        printf("The ASCII value of '%c': %d\n", ch, ch);
        while(1){
            printf("[1] Run again\n[0] Exit\nEnter: ");
            if(scanf("%d", &temp) != 1){
                printf("Invalid input\n");
                while(getchar() != '\n');
                continue;
            }
            if(temp<0 || temp > 1){
                printf("Invalid input\n");
                while(getchar()!='\n');
                continue;
            }
            break;
        }
        while(getchar() != '\n');
        if(temp == 0){
            break;
        }
    }
    return 0;
}