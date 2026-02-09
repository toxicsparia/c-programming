// QS: Write a program to find if a character entered by user is upper case or lower case.
#include <stdio.h>

int main(void){
    char x;
    printf("Enter a character here: \n");
    scanf("%c", &x);
    if(x >= 'a' && x <= 'z'){
        printf("The input is a lower case character\n");
    }
    else if(x >= 'A' && x <= 'Z'){
        printf("The input is a upper case character\n");
    }
    else{
        printf("This isn't a input\n");
    }
return 0;
}