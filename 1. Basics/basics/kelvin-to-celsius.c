#include <stdio.h>

int main() {
    float kelvin;
    printf("Enter the Kelvin here: \n");
    scanf("%f", &kelvin);
    printf("%.2f Kelvin in celsius is %.2f \n", kelvin, kelvin-273.15);
    return 0;
}