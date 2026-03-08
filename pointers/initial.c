// Print the value of 'i' from its pointer to pointer
#include <stdio.h>

int main(){
    int i=444; //making a variable
    int *ptr = &i; //storing the address of 'i' in the pointer ptr
    int **pptr = &ptr; // now storing the address of ptr in the 'pointer to pointer';
    printf("%d\n", **pptr); // printing the 'pointer to pointer';
    return 0;
}