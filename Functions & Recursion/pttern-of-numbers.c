#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, row;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    row= (2*n )-1;
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            int top=i;
            int left=j;
            int bottom=row-i-1;
            int right=row-j-1;
            int middle=top;
            if(left<middle)middle=left;
            if(bottom<middle)middle=bottom;
            if(right<middle)middle=right;
            printf("%d ", n-middle);
        }
        printf("\n");
    }
    return 0;
}