// 1.	Write a program that asks the user for their age in years and prints their approximate age in days and hours.
#include <stdio.h>

void get_input(int *year, int *current_year);
void age_calc(int cy, int by, float calc[]);

int main(){
    int temp = 1;
    while(1){
        int year, current_year;
        get_input(&year, &current_year);
        float calc[2];
        age_calc(current_year, year, calc);
        printf("Your age in Day: %.2f (aprox)\nYour age in Hours: %.2f (aprox)\n\n", calc[0], calc[1]);
        while(1){
            printf("[1] Run Again\n[0] Exit\nEnter: ");
            if(scanf("%d", &temp) != 1){
                printf("Invalid input\n");
                while(getchar()!='\n');
                continue;
            }
            else if(temp<0 || temp>1){
                printf("Please enter a valid input\n");
                while(getchar()!='\n');
                continue;
            }
            break;
        }
        if(temp==0){
            break;
        }
    }
    return 0;
}

void get_input(int *year, int *current_year){
    while(1){
        printf("Enter current year: ");
        if(scanf("%d", current_year) != 1){
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        else if(*current_year < 1500 || *current_year > 9999){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    while(1){
        printf("Enter the year of birth: ");
        if(scanf("%d", year) != 1){
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(*year < 1500 || *year > 9999){
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        else if(*year >= *current_year){
            printf("The year of birth must be lower then current year\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
}
void age_calc(int cy, int by, float calc[]){
    // day calculating.. 
    calc[0] = (cy-by)*365.0f;
    // hours calculating;
    calc[1] = calc[0]*24.0f;
}