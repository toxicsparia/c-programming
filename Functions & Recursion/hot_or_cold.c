//Write a function to print "Hot" or "Cold" depending on the temperature (celsius) user enters.
#include<stdio.h>


    void temp(float c);
    void temp(float c){
    if(c <= 0){
        printf("Freezing / Very Cold\n");
    }
    else if(c <= 10){
        printf("Cold\n");
    }
    else if(c > 10 && c <= 20){
        printf("Cool\n");
    }
    else if(c > 20 && c <= 25){
        printf("Room Temperature\n");
    }
    else if (c > 25 && c <= 30){
        printf("Warm / Hot\n");
    }
    else{
        printf("Very Hot\n");
    }
}
int main(){
    float c;
    while(1){
    printf("Enter temperature in Celsius: ");
    if(scanf("%f", &c)!= 1){
        printf("Invalid Input\n");
        while(getchar() != '\n');
        continue;
    }
    break;
}
    temp(c);
    return 0;
}