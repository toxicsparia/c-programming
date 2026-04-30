// Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers;
// I know that there's a simple method to do the same.. But I am just trying to do it this way...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *odd;
    odd = (int *) calloc(5, sizeof(int)); // allocate memory using calloc in odd pointer
    if(odd==NULL){ // validation check
        printf("Error: unable to allocate memory");
        return 1;
    }
    for(int i=0, k=1; i<5; i++){ // running the loop for 5 times cause I need 5 odd numbers..
        while(odd[i] == 0){ // odd[i] = 0 by default.. cause I am using here calloc..
            if(k%2 != 0){ // formula to find the odd numbers.
                odd[i] = k; // If the odd number found then this will store in odd[i] and this would be not equal to zero... so the while loop would be terminated.
            }
            k++; // increasing k by 1 to find the next odd numbers..
        }
        printf("odd (%d): %d\t", i+1, odd[i]); // printing the odd numbers..
    }
    printf("\n");
    int *even = (int *) realloc(odd, 6* sizeof(int)); // I need 6 even numbers so I am increasing the memory size using realloc.
    if(even != NULL){
        odd = even; // if memory allocated successfully then overwrite the memory.
        for(int i=0, k=2; i<6; i++){ // creating loop to get even numbers
            odd[i] = 0; // realloc doesn't give 0 by default so I did it manually;
            while(odd[i] == 0){ // same formula to find even numbers
                if(k%2 == 0){
                    odd[i] = k;
                }
                k++;
            }
            printf("Even (%d): %d\t", i+1, odd[i]);
        }
        printf("\n");
    }
    else{ // if the memory allocation failed for some reason then the memory will release and return 1;
        printf("Error: unable to reallocate memory.");
        free(odd);
        return 1;
    }
    free(odd); // releasing the allocated memory after work done...
    return 0;
}