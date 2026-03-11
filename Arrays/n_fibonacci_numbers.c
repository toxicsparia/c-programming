// write a program to store the first n fibonacci numbers;
#include <stdio.h>

int main(){
    int n;
    while(1){
        printf("Write a number (n>1): ");
    if (scanf("%d", &n)!=1){
        printf("Invalid Number");
        while(getchar() != '\n');
        continue;
    }
    else if(n<=1){
        printf("Please enter a number > 1");
        continue;
    }
    break;
}
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    printf("%d\t%d\t", arr[0], arr[1]);
    for(int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d\t",arr[i]);
    }
    return 0;
}