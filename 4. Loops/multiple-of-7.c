//keeps taking number from user until user enter a number which is multiple of 7.
#include <stdio.h>

int main() {
    for(int x=1; x%7!=0;){
        printf("Enter a number: ");
        if(scanf("%d", &x) != 1){
            printf("invalid input\n");
            return 1;
        }
        x%7==0?printf("%d: is multiple of 7 \n", x):printf("%d: isn't multiple of 7 \n", x);
    }
return 0;
}