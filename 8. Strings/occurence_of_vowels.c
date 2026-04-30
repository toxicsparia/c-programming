//write a function to count the occurence of vowels in a string.
#include <stdio.h>

int vowels(char str[]); // prototype

int main(){
    char str[] = "Hello World"; // Creating a string;
    printf("Vowels: %d\n", vowels(str)); // calling the function and passing the string// and printing the count;
    return 0;
}

int vowels(char str[]){ //declare the function
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){ //str[i] will run until the string reach the end means '\0' (the null byte)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){// logice to detect vowel
            count++;//increasing the count by 1 whenever found a vowel;;;;
        }
    }
    return count;
}