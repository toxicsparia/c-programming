// print reverse of the table for a number n
#include <stdio.h>

int main(){
    printf("Enter a number: ");
    float n;
    if(scanf("%f", &n) != 1){
        printf("Invalid input\n");
        return 1;
    }
    int N;
    N = n;
    if(n != N){
        printf("Decimal numbers are not allowed\n");
        return 1;
    }
    for(int i=10;i>=1;i--){
        printf("%d * %d = %d\n", N, i, N*i);
    }
    return 0;
}