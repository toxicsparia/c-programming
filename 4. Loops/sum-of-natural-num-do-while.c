//print the sum of first 'n' natural numbers. and at the last print the numbers in reverse.
#include <stdio.h>

int main(){
    printf("Enter your number \n");
    int n, i, sum;
    i = 1;
    sum = 0;
    if(scanf("%d", &n) != 1){
        printf("Invalid input \n");
        return 1;
    }
    else if(n <= 0){
        printf("Negative or zero \n");
        return 1;
    }
    do{
        sum += i;
        i++;
    }while(i <= n);
    printf("Sum: %d \n", sum);
    do{
        printf("%d\n", n);
        n--;
    }while(1<=n);
return 0;
}