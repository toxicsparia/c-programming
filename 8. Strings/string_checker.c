//Check if a given character is present in a string or not;
#include <stdio.h>

void strchk(char str[], char ch); // function prototype;

int main(){
    char name[] = "Hello World"; // creating a string;
    char word = 'W'; // declaring a character;
    strchk(name, word); // calling the function and passing the string and character;
    return 0;
}

void strchk(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){ // checking each value of string;
        if(str[i] == ch){
            printf("True\n");
            return; // if we fount a same value then we will cancel the function and return
        }
    }
    // if we can't find a matching number even after finishing the loop then we will print the false statement
    printf("False\n");
}