//write a function to calculate the sum, product and average of 2 numbers. Print the sum, product and average in the main function.
#include <stdio.h>


void calculation(int *sum, int *product, float *avg); //function prototype: using pointers to store value,
int main(){
    int sum, product;
    float avg;
    calculation(&sum, &product, &avg);//call funtion and pass the addresses so it can fill the value.
    printf("The sum: %d\n", sum);
    printf("The product: %d\n", product);
    printf("The avg: %.2f\n", avg);
    return 0;
}
void calculation(int *sum, int *product, float *avg){
    int a, b;
    while(1){
    printf("Enter the 1st number: ");
    if(scanf("%d", &a) != 1){
        printf("Invalid input\n");
        while(getchar() != '\n');
        continue;
    }
    printf("Enter the 2nd number: ");
    if(scanf("%d", &b)!=1){
        printf("Invalid input\n");
        while(getchar() != '\n');
        continue;
    }
    break;
}
    *sum = a + b; //calculations
    *product = a * b;
    *avg = (a+b)/2.0;

}