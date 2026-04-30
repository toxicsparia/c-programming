//print the numbe from 0 to n, if n given by user
#include <stdio.h>

int main(){
    printf("Enter number \n");
    int n, i;
    i = 0;
    if(scanf("%d", &n) != 1){
        printf("invalid number \n");
        return 1;
    }
    else if(n < 0){
        printf("Less then 0 isn't allowed \n");
        return 1;
    }
    while(i <= n){
        printf("%d \n", i);
        i++;// i++ means i+1; i+=1;
    }
return 0;
}