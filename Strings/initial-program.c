// Create a string Firstname and lastname to store details of user & print all the characters using a loop.
#include <stdio.h>

void printname(char arr[]);
int main(){

char firstname[] = "MASIDUR";
char lastname[] = "RAHAMAN"; 
printname(firstname);
printname(lastname);
return 0;
}

void printname(char arr[]){
    for(int i=0;arr[i] != '\0' ;i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}