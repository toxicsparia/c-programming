// write the default value of memory into a text file
#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("default_memory.txt", "w");
    if(fptr == NULL){
        printf("Trouble to open / creating the file\n");
        return 1;
    }
    fprintf(fptr, "%d\t", sizeof(int)); // the sizeof(?) function.. is use for get the memory size of the data type according to our system..
    fprintf(fptr, "%d\t", 5*sizeof(int)); // also we can multiply the size.. 
    fprintf(fptr, "%d\t", sizeof(float));
    fprintf(fptr, "%d\n", sizeof(char));
    fclose(fptr);
    return 0;
}