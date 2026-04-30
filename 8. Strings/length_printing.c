// Make a program that inputs user's name and print its length;
#include <stdio.h>

int main(){
    char name[] = "Masidur Rahaman";// declaring an array that holds the name value;
    int count = 0; // declaring a variable with 0 value for counting the length;
    for(int i=0;name[i] != '\0' ; i++){ // when name[i] not equal to '\0' (null byte / end of a string). 
        count++;
        if(name[i] == ' '){ // cutting the space count;
            count--;
        }
    }
    printf("Your name's length is: %d\n", count);
    return 0;
}