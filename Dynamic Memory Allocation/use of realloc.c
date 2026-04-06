// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers...
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));// using calloc to allocate 5* integers memory to the pointer;
    if (ptr == NULL){ // validaton check
        printf("Error: trouble to allocate memory\n");
        return 1;
    }
    for(int i=0; i<5; i++){ // creating a loop to print the allocated memory.. we know that all the memory location created by calloc holding it's default value 0;
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    int *temp = realloc(ptr, 8*sizeof(int)); // using temp pointer to allocate new size;
    if(temp != NULL){ // validation check..
        ptr = temp; // If memory allocated successfully then allocate the new size...
        printf("\n");
        for(int i=0; i<8; i++){ // then print
            printf("%d\t", ptr[i] = 4); // allocate memory by calloc holds value 0 but realloc holds garbage number so I have set all the ptr value to 4;
        }
        printf("\n");
    }
    else{
        printf("Error: to apply the new memory\n");
        free(ptr); // if reallocated failed
        return 1; //
    }
    free(ptr); // free the memory after done...
    return 0;