// Find the salted form of a password entered by user if the salt is "123" & added at the end.
#include <stdio.h>
#include <string.h>

int main(){
    char pass[100];// declaring a string with 100 value;
    char salt[] = "123";// creating our salt value;
    printf("Enter your password: ");
    scanf("%s", pass);// inputing the password by user
    strcat(pass, salt);// This function will merge the pass with salt (pass + salt);
    printf("Your salted password is: ");
    puts(pass); // printing the string;
return 0;
}