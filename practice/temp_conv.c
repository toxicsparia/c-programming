// Write a program that converts a temperature given in Celsius to Fahrenheit and vice varsa.
#include <stdio.h>

float get_temp();
void ctof(float x);
void ftoc(float x);
int main(){
    int choice;
    while(1){
        printf("\n[1] Celsius to Fahrenheit convert\n[2] Fahrenheit to Celsius convert\n[0] Exit\nEnter: ");
        if(scanf("%d", &choice) != 1){
            printf("Invalid Input: Please entera valid input\n");
            while(getchar() != '\n');
            continue;
        }
        if (choice == 0){
            break;
        }
        if(choice < 0 || choice > 2){
            printf("Please make a valid choice\n");
            while(getchar() != '\n');
            continue;
        }
            float temperature = get_temp();
            switch (choice){
                case 1: ctof(temperature);
                break;
                case 2: ftoc(temperature);
                break;
        }
    }
    return 0;
}
float get_temp(){
    float temperature;
    while(1){
        printf("Enter temperature: ");
        if(scanf("%f", &temperature)!= 1){
            printf("Invalid Input: Please enter a valid input\n");
            while(getchar()!='\n');
            continue;
        }
        break;
    }
    return temperature;
}
//Celsius to fahrenheit
void ctof(float x){
    printf("%.2f Degree Celsius = %.2f Degree Fahrenheit\n", x, (x*9.0/5.0)+32);
}
//Fahrenheit to Celsius
void ftoc(float x){
    printf("%.2f Degree Fahrenheit =  %.2f Degree Celsius\n", x, (x-32)*5.0/9.0);
}