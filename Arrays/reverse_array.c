//write a function to reverse an array;
#include <stdio.h>

void reverse_array(int arr[], int n);
void print_array(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse_array(arr, 9);
    print_array(arr, 9);
return 0;
}
void print_array(int arr[], int n){
    for(int i=0; i<n; i++){
    printf("%d\t", arr[i]);
    }
    printf("\n");
}
void reverse_array(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}