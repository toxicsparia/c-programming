// Create a structure to store complex numbers. (use arrow operator).
#include <stdio.h>

typedef struct complex{ //creating a structure to store complex numbers.
    float x;
    float y;
}cplx;

void print(cplx *ptr); //creating a function to print the complex number

int main(){
    cplx store_num = {4.3, 7.6}; //giving the value of x and y
    print(&store_num);// calling the function and passing the address of store_num as pointer address..
    return 0;
}

void print(cplx *ptr){ //define the function
    printf("The complex number is: %.2f + %.2fi\n", ptr->x, ptr->y); // using arrow operator... ptr->x means store_num.x
    return;
}