//write a program to write all the odd numbers from 1 to n in a file.
#include <stdio.h>

int main(){
    FILE *fptr; // creating a file pointer
    fptr = fopen("odd_numbers.txt", "w"); // open/create a file with write mode
    if(fptr == NULL){ // checking validation...
        printf("trouble to open odd_numbers.txt\n");
        return 1;
    }
    int n;
    printf("Extract odd numbers from 1 to n\n");
    while(1){
        printf("N = ");
        if(scanf("%d", &n) != 1){ // storing the n.and input validation..
            printf("Please enter a valid integer number\n");
            while(getchar() != '\n'); // clearing the buffer.
            continue;
        }
        break;
    }
    for(int i=1; i<=n; i++){ // creating the loop
        if(i%2 != 0){ //logic to get the odd numbers... we know that odd number's are divisible by 1 or the same number of itself.... so this is not divisible by 2..
            fprintf(fptr, "odd: %d\n", i); // writing into the text doc..
        }
    }
    fclose(fptr); // closing the opened file..
    return 0;
}