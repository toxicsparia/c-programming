// 2 numbers- a&b, are written in a file write a program to replace them with their sum.
#include <stdio.h>

int main(){
    FILE *rptr; // creating a file pointer
    rptr = fopen("read_sum.txt", "r"); // opeining the file as read mode..
    if (rptr == NULL){ // validation checking
        printf("Error: can't open the file\n");
        return 1;
    }
    int num1, num2; // creating two variables to store 2 numbers.
        if(fscanf(rptr, "%d", &num1) != 1){ // reading/scanning the numbers from the file
            printf("Error: not an integer number\n");
            return 1;
        }
        if(fscanf(rptr, "%d", &num2) != 1){ //doing same for num2
            printf("Error: not an integer number\n");
            return 1;
        }
    fclose(rptr);
    FILE *wptr;
    wptr = fopen("read_sum.txt", "w"); // after reading opening the file as write mode.
    if (wptr == NULL){ // validation checking
        printf("Error: trouble to open the read_sum.txt\n");
        return 1;
    }
    fprintf(wptr, "Sum: %d\n", num1+num2); // printing / writing into the doc and overwrite the data to the file.
    fclose(wptr); // closing the opened file
    return 0;
}