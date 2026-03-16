// Write a progeam to insert an element at the end of an Array..
#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40};
    int n = 4;
    while(1){
    printf("Enter a number: ");
    if(scanf("%d", &arr[n]) != 1){
        printf("Invalid number\n");
        while(getchar() != '\n');
        continue;
    }
    break;
}
    for(int i = 0; i<n+1; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}