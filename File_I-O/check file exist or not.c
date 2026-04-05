//Check if a file exist or not before reading from it.
#include <stdio.h>

int main(){
    FILE *ptr; // file is a predefined structure in C... creating a pointer using FILE structure.
    ptr = fopen("file.txt", "r");//fopen = opening a file... ("file name", "mode.. like r for reading, w for writing and a for append");
    if(ptr == NULL){// If the file doesn't exist then it would return NULL..
        printf("The 'file.txt' doesn't exist\n");
    }
    else{
        printf("The 'file.txt' is exist\n");
        fclose(ptr); // after work done.. we must have to close the file.... (always close the file that opened.. after done);
    }
    return 0;
}