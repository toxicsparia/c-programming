#include <stdio.h>
#include <math.h>
//this program is for checking the armstrong number or not for the 3 digit number.

int main(void){
    int x;
    printf("Enter a positive 3 digit number to check armstrong \n");
    scanf("%d", &x);
if(x < 0){
    printf("This is a negative number please enter a positive 3 digit number to check armstrong \n");
    return 1;
}
else if(x <=  99 || x > 999){
    printf("Please enter a 3 digit number: \n");
    return 1;
}
int d1, d2, d3, armstrong;
d1 = x % 10; // This gives me the remainder, always gives me the last digit.
d2 = x / 10; // This statement will kick the last digit. e.g user input - 153, 153/10= 15.3 and decimal value in int will kicked out.
d2 = d2 % 10; 
d3 = x / 100;// e.g. 153/100 = 1.53
armstrong = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);
if(armstrong == x){
    printf("%d is a armstrong value. \n", x);
}
else{
    printf("%d isn't a armstrong value. \n", x);
}
return 0;
}