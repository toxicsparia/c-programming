// Write a program to allocate memory to store 5 price.
#include <stdio.h>
#include <stdlib.h> // This is (standard library)... we use this for using DMA function like malloc() calloc().

int main(){
    // memory allocation using malloc()
    float *ptr; // creating a pointer in float
    /*
    malloc() return void so first we have to typecast the data type that we need using (data_type*)
    then we write malloc(how much size we need we can write it in byte or give the predefined size...)
    DAM - allocate the memory during runtime.. not during compile..
    */
    ptr = (float*) malloc(5*sizeof(float)); // This is the syntex of use malloc.. 
    if(ptr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    ptr[0] = 279.84;
    ptr[1] = 389.5;
    ptr[2] = 308.6;
    ptr[3] = 200.0;
    ptr[4] = 278.4;
    for(int i = 0; i<5; i++){
        printf("Price %d = %.2f\n", i+1, ptr[i]);
    }
    free(ptr); // we must have to release the malloc after using it.. using free() function.
    //memory allocation using calloc()
    int *cptr; // creating a pointer..
    /*
    First typecast. then using calloc (first we have to  specify how much continer we need, then what shize of continer we need.. not like malloc.)
    calloc give a default value to each continer..
    */
    cptr = (int*) calloc(3, sizeof(int));
    if(cptr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    cptr[0];cptr[1];cptr[2];
    for(int i=0; i<3; i++){
        printf("%d\t", cptr[i]);
    }
    printf("\n");
    free(cptr);
    return 0;
}