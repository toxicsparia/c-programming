// write a function named slice, which takes a string and print a sliced string from index 2 to 6;
#include <stdio.h>

void slice(char arr[]); //creating a function;

int main(){
    char str[] = "HelloWorld";
    slice(str);
    return 0;
}

void slice(char arr[]){
    char slicedstr[100];//declaring a string;
    int j = 0;
    for(int i=2; i <=6; i++){ //creating a loop we need from 2 to 6 value
        slicedstr[j] = arr[i]; // the logic;
        j++;
    }
    slicedstr[j] = '\0'; // adding the null byte;
    puts(slicedstr); //printing the sliced version of the string;
}