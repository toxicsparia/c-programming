//keep taking numbers from user untill the user type an odd number
#include <stdio.h>

int main(){
    for(int n=0; n%2 == 0;){
        printf("Enter a number: \n");
        if(scanf("%d", &n) != 1){
            printf("invalid input \n");
            return 1;
        }
        n%2==0?printf("Even;\n"):printf("Odd, Game over;\n");
    }
return 0;
}