// Write a program to determine if a given year is a leap year (accounting for the 100 and 400 rules).
#include <stdio.h>

// declaring two functions.. one for getting input and one for calculation and printing the result..
int get_input();
void calc(int year);

int main(){
    // declaring a temp variable to use for reuse this program again and again..
    while(1){
        int temp;
        // declaring a variable and calling the get input function..
        int year = get_input();
        // calling the calc function and passing the arguments...
        calc(year);
        // This is for reuse the program...
        while(1){
        printf("[1] Run Again\n[0] Exit\nEnter: ");
        if(scanf("%d", &temp) != 1){
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        // If the user type other thing then the '1' and '0' then the if block will open...
        if(temp != 1 && temp != 0){
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        // done... now breaking this loop..
        break;
    }
    // if the users types 0 then the loop will break and the program will end...
        if(temp == 0){
            break;
        }
    }
    return 0;
}

int get_input(){
    // using while loop for continue the program untill the users types all the inputs correctly.
    int year;
    while(1){
    printf("Year: ");
    // If the user types any invalid input then the if block will open
    if(scanf("%d", &year) != 1){
        printf("Please enter a valid input\n");
        while(getchar() != '\n'); // buffer retains..
        continue; // skip the iteration..
    }
    // If the user types any other thing after the integer like space or abc or anything then the if block will open...
    if(getchar() != '\n'){
        printf("Invalid input\n");
        while(getchar() != '\n');
        continue;
    }
    // 0 and negative value check..
    if(year<1){
        printf("Please enter a valid input\n");
        continue;
    }
    break; // done.. now break the loop..
}
    return year; // returning the year to the main function...
}

void calc(int year){
    //logic...
    (year%4 == 0 && year%100 != 0) || year%400 == 0 ? printf("%d is a Leap Year\n", year) : printf("%d isn't a Leap Year\n", year);

    //Logic explain...
    /*
    year%4 == 0 and year%100 != 0...
    If the year is divisible by 4 and not divisible by 100 then this will return true... and print the true block...
    If anything false like if the year isn't divisible by 4 or the year is divisible by 100 then the block will false as we know
    that the logical operators returns true if all the given conditions are true... and returns false even if just one condition false..
    So.. Now the logical or will check that if is it divisible by 400 or not... If yes.. then it will return true...
    and the true block will open... and if no then the else block will opened....
    */
}