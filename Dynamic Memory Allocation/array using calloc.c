// create an array of size 5 using calloc. & enter it's value from the user...
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int)); // storing 5 int size memory to the int pointer
    if(ptr == NULL){ // validation check
        printf("Error: Trouble to allocate memory.\n");
        return 1;
    }
    for(int i = 0; i<5; i++){ // using loop
        while(1){
            printf("Enter value %d:\n", i+1);
            if(scanf("%d", &ptr[i]) != 1){ // storing the value in the dynamic memory location
                printf("Please enter an integer type of value\n");
                while(getchar() != '\n'); // clearing buffer
                continue;
            }
            break;
        }
    }
    for(int i = 0; i<5; i++){ // using loop to print
        printf("%d= %d\n", i+1, ptr[i]);
    }
    free(ptr); // after work done realeasing the memory;;
    return 0;
}