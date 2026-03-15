// write a program to print a largest number in an array.
#include <stdio.h>

int main(){
    int big;
    int num[] = {14, 24, 34, 44, 54, 64, 74, 84, 48, 47};
    big = num[0];
    for(int i=1; i < 10;i++){
        if(big < num[i]){
            big = num[i];
        }
    }
        printf("Largest number: %d\n", big);
    return 0;
}