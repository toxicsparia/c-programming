// Write a program to allocate memory to store 5 price.
#include <stdio.h>
#include <stdlib.h> // This is (standard library)... we use this for using DMA function like malloc() calloc().

int main(){
    float *ptr; // creating a pointer in float
    /*
    malloc() return void so first we have to specify the data type that we need using (data_type*)
    then we write malloc(how much size we need we can write it in byte or give the predefined size...)
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
    return 0;
}