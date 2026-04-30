//swap 2 numbers, a & b;
#include <stdio.h>

int main(){
    int a=44, b=4;
    int temp = a;
    int *aptr= &b;
    a = *aptr;
    int *bptr= &temp;
    b = *bptr;
    printf("a = %d, b= %d\n", a, b);
    return 0;
}