/*
4. Day of Week
o Take a number (1-7) as input
o Display the corresponding day (1 = Sunday, 2 = Monday e.t.c)
o Bonus: Handle invalid input
*/
#include <stdio.h>

int main(){
    float fnum;
    printf("Please enter a number between (1 - 7) to check the day of week \n");
    if(scanf("%f", &fnum) != 1){
        printf("please enter a valid number \n");
        return 1;
    }
    else if(fnum <= 0 || fnum > 7){
        printf("please enter a number between (1 - 7) to check the day of week \n");
        return 1;
    }
    int num;
    num = fnum;
    if(num != fnum){
        printf("decimal number: please enter a number between (1 - 7) to check the day of week \n");
        return 1;
    }
    switch(num){
        case 1 : printf("Sunday \n");
                break;
        case 2 : printf("Monday \n");
                break;
        case 3 : printf("Tuesday \n");
                break;
        case 4 : printf("Wednesday \n");
                break;
        case 5 : printf("Thursday \n");
                break;
        case 6 : printf("Friday \n");
                break;
        case 7 : printf("Saturday \n");
                break;
    }
return 0;
}