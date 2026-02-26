//write a function to convert celsius to fahrenheit;
#include <stdio.h>

//function declaration
float temp(float celsius);
//function definition
float temp(float celsius){
    return celsius*9/5+32;//temp conv formula return;
}
int main(){
    float celsius;
    while(1){//infinite loop
    printf("Enter celsius: ");
    if(scanf("%f", &celsius) != 1){//getting the input from user
        printf("Invalid input\n");
        while(getchar() != '\n');//clearing buffer
        continue;//restart
    }
    break;//breaking the infinite loop
}
    printf("%.2f Degree Celsius = %.2f Degree Fahrenheit\n", celsius, temp(celsius));//calling the temp function;
    return 0;
} 