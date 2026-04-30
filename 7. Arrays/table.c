// Create a 2D Array, storing the tables of 2 & 3;

#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int num);//creating a function for storing the table

int main(){
    int arr[2][10]; // 2D array; 2 column and 10 row;
    storeTable(arr, 0, 10, 2); //calling the function
    for(int i = 0; i<10; i++){
        int x = i + 1;
        printf("2 * %d = %d\n", x, arr[0][i]);
    }
    printf("\n");
    storeTable(arr, 1, 10, 3);
    for(int i = 0; i<10; i++){
        int y = i + 1;
        printf("3 * %d = %d\n", y, arr[1][i]);
    }
// printf("Table 3: %d * %d: %d\n", three, i, three*i);
return 0;
}

void storeTable(int arr[][10], int n, int m, int num){//defining the function
    for(int i=0; i<m; i++){ 
        arr[n][i] = num * (i+1); // n == array number, 0/1; 
        //num = 2, 2 * 0+1 = 2; 2 * 1+1 = 4; 2*2+1 = 6 .... so on...
    }
}