// Write a program that takes three side lengths and determines if they form a valid triangle, and if so,
//whether it is equilateral, isosceles, or scalene.
#include <stdio.h>

void get_input(float *a, float *b, float *c);
int result(float a, float b, float c);

int main(){
    float a, b, c;
    get_input(&a, &b, &c);
    result(a, b, c);
    printf("\nThank you for using this code\n");
    return 0;
}

void get_input(float *a, float *b, float *c){
    while(1){
        printf("Enter the lengths of the triangle\nA: ");
        if(scanf("%f", a) != 1){
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(*a < 1.0f){
            printf("Please enter a positive value\n");
            while(getchar() != '\n');
            continue;
        }
        while(1){
            printf("B: ");
            if(scanf("%f", b) != 1){
                printf("Please enter a valid input\n");
                while(getchar() != '\n');
                continue;
            }
            if(*b < 1.0f){
                printf("Please enter a positive value\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        }
        while(1){
            printf("C: ");
            if(scanf("%f", c) != 1){
                printf("Please enter a valid input\n");
                while(getchar() != '\n');
                continue;
            }
            if(*c < 1.0f){
                printf("Please enter a positive value\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        }
        break;
    }
}

int result(float a, float b, float c){
    if(a+b <= c || a+c <= b || b+c <= a){
        printf("This isn't a valid triangle\n");
        return 1;
    }
    if(a == b && b == c){
        printf("This is a Equilateral Triangle\n");
    }
    else if(a == b || b == c || a==c){
        printf("This is a Isosceles Triangle\n");
    }
    else{
        printf("This is a Scalene Triangle\n");
    }
}