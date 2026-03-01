//d. Make your own pow function.
#include <stdio.h>

float power(float n, int p);
float validation();
float power(float n, int p){
    float x=n;
    int ax=p;
    if(ax==0){
        return 1;
    }
    else{
    for(int i=1; i<p; i++){
        x=x*n;
    }
    return x;
}
}
float validation(){
    while(1){
        float z;
    if(scanf("%f", &z) != 1){
        printf("Invalid input");
        while(getchar() != '\n');
        continue;
    }
    return z;
    break;
}
}

int main(){
    float a;
    int b;
    printf("Enter your number: ");
    a = validation();
    printf("To the power: ");
    b = validation();
    printf("%.2f To the power %d is: %.2f\n", a, b, power(a, b));
    return 0;
}
