// Ask the user to enter their full name and print it back to the user;
#include <stdio.h>

int main(){
    printf("Enter your First Name: ");
    char FirstName[50];
    scanf("%s", FirstName); // %s is a format specifier only for strings. This can input or output a word at once.
    while(getchar() != '\n'); // Clearing the input buffer;
    printf("Your First Name is: %s", FirstName);
    printf("\n");
    char FullName[90]; //declaring a string with maximum 90 characters;
    printf("Enter your full name: ");
    fgets(FullName, 90, stdin); // This is to get multiword input in a string.  The sysntex is : first string name, then the maximum value. and at the last when to end... stdin (standard input);
    printf("Your name is: ");
    puts(FullName); // Puts use for print multiword character;
    printf("\n");
    return 0;
}