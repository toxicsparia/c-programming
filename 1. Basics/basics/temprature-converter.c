#include <stdio.h>

int main() {
    float celsius;
    printf("Enter the celsius here: \n");
    scanf("%f", &celsius);
    printf("%.2f Celsius in fahrenheit is: %.2f\n", celsius, (celsius*9/5)+32);
    return 0;
}