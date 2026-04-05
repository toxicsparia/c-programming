// Make a program to read 5 integers from a file.
#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("read.txt", "r");// opening the file in reading mode
    if(fptr == NULL){ // If the file doesn't exist then it will return NULL and our program return 1;
        printf("Error: couldn't open the file\n");
        return 1;
    }
    int x;// making a integer variable to store the data after reading
    for(int i=0; i<5; i++){ // creating a loop to read and print for 5 times;
    if(fscanf(fptr, "%d", &x) != 1){ // reading the file and storing in x variable.
        printf("This isn't a integer\n");
        fclose(fptr); //closing before return;
        return 1;
    } 
    printf("%d\t", x); // printing the text;
    }
    printf("\n");
    fclose(fptr); // closing the opened file...
    return 0;
}