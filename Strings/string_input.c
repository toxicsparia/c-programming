// Take a string input from the user using %c;
#include <stdio.h>

int main(){
    char str[100];// declaring a string with 100 ch space
    char ch; 
    int i = 0;
    while(ch != '\n'){ // run till the user hit the enter button;
        scanf("%c", &ch); // scanning using %c and storing into the ch variable;
        str[i] = ch; // storing characters into the string i;
        i++;
    }
    str[i] = '\0'; // putting the null character to declare that this is a string;
    puts(str); // printing the whole string;

    // This fuction act like fgets() function.
    return 0;
}