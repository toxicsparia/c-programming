//print the factorial of a number;
#include <stdio.h>

int main(){
    int n, j;
    unsigned long long x;
    printf("Enter a number to check the factorial: ");
    if(scanf("%d", &n) !=1){
        printf("Invalid number\n");
        return 1;
    }
    if(n<0){
        printf("undefined\n");
        return 1;
    }
    j=n;
    x=1;
    for(int i=1; i<=n; i++){
        x=x*i;
        }
        printf("%d!= %d\n", j, x);
return 0;
    }