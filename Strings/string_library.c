#include <stdio.h>
#include <string.h>

int main(){
    // 1. string length function;
    char name[] = "Masud"; // declaring an array for holding a name;
    int Name = strlen(name); // string length function
    /* strlen() function is for counting the length of a string this excludes the null byte '\0' 
       putting the strlen(name) value in an int because strlen return a unsigned long int value.*/
    printf("The length of your first name is: %d\n", Name);

    // string copy function;
    char oldSTR[] = "old value";
    char newSTR[] = "new value";
    strcpy(newSTR, oldSTR);// this will copy the value of oldSTR into the newSTR.
    puts(newSTR);// now the output should be - "old value", not new value;

    //string concatenate
    char str1[100] = "Hello ";//The string must have enough space to put an another value on it for merging.
    char str2[] = "World";
    strcat(str1, str2); // This function is use for merging the values of 2 string. 
    puts(str1); // The output should be - Hello World....

    //string compare;
    char strA[] = "Cat";
    char strB[] = "Dog";
    char strC[] = "Dog";
    char strD[] = "Cat";
    char strE[] = "Hello";
    char strF[] = "Hello";
    printf("%d\t", strcmp(strA, strB));// C<D so the ASCHII value of c is less than d. for example if the ASCHII value of C is 10 then the ASCHII value of D must be 11; so the output will be 10-11 = -1; 
    printf("%d\t", strcmp(strC, strD));// D>C, 11 - 10 = 1;
    printf("%d\n", strcmp(strE, strF));// H==H, 10-10 = 0;
    return 0;
}