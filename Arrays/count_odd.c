// write a function to count the number of odd numbers in an array.
#include <stdio.h>

int odd(int x[], int n);

int main(){
    int x[] = {1,2,3,4,5,6,7,8,9};
    printf("odd count: %d\n", odd(x, 9));
return 0;
}

int odd(int x[], int n){
    int count = 0;
    for(int i=0; i <= n; i++){
        if((x[i]%2) != 0){
            count++;
        }
    }
    return count;
}