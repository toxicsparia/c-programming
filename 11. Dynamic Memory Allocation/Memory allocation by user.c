// Write a programto allocate memory of size n, where n is entered by user..
#include <stdio.h>
#include <stdlib.h> // including stdlib.h to use malloc

int main(){
    void *ptr; // creating a void type pointer.. cause I will store raw memory in bytes.. and malloc return nothing...
    int n;
    while(1){
        printf("Enter memory size (bytes): ");
        if(scanf("%d", &n) != 1){ // validation check
            printf("Please enter a valid memory size\n");
            while(getchar() != '\n'); //clearing buffer
            continue;
        }
        if(n<1){ // validation check
            printf("Memory size must be greater than '0'\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    ptr = malloc(n); // storing the malloc in the void ptr
    if(ptr==NULL){ // validation check
        printf("Error: unable to allocate the memory\n");
        return 1;
    }
    printf("%d bytes memory allocated successfully.\n", n);
    free(ptr); // at the last realeasing the malloc..
    return 0;
}