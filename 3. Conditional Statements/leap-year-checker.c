#include <stdio.h>
/*
Leap Year Checker
o Take a year as input and determine if it's a leap year
o A year is a leap year if: divisible by 400 OR (divisible by 4 AND not divisible by 100)
*/

int main() {
    int year;
    printf("Enter the year you wanna check Leap Year or not \n");
    if(scanf("%d", &year) != 1 || year < 0){ //input validation check
        printf("This is an invalid input \n");
        return 1;
    }
    if(year % 100 == 00){ //this will detect the century years
        if(year % 400 == 0){
            printf("%d is a leap year \n", year);
        }
        else{
            printf("%d isn't a leap year \n", year);
        }
        return 1;
    }
    if(year % 4 == 0){
        printf("%d is a leap year \n", year);
    }
    else{
        printf("%d isn't a leap year \n", year);
    }
return 0;
}