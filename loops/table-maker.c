// print the table of a number, input by a user.
#include <stdio.h>

int main(){
    printf("Please enter a number\n");
    int n;
    if(scanf("%d", &n) != 1){
        printf("Please enter a valid number\n");
        return 1;
    }
    else if(n == 0){
        printf("Please enter a valid number\n");
        return 1;
    }
    for(int i = 1, multi; i<=10; i++){
        multi = n * i;
        printf("%d * %d = %d; \n",n, i, multi);
    }
return 0;
}