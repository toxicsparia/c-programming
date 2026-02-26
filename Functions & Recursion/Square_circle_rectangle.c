//write functions to calculate area of square, circle and rectangle;
#include <stdio.h>
#include <math.h>

//function declaration/prototype;
float square(float side);
float circle(float radius);
float rectangle(float width, float length);

//function definition;
float square(float side){
    return side*side;//returning the area of square;
}
float circle(float radius){
    return 3.14*pow(radius, 2);//returning the area of circle;
}
float rectangle(float width, float length){
    return width*length;//returning the area of rectangle;
}

int main(){
    float Choose;
    int choose;
    while(1){
    printf("choose\n");//let the user choose what he want;
    printf("1. Area of square.\n");
    printf("2. Area of circle.\n");
    printf("3. Area of rectangle.\n");
    if(scanf("%f", &Choose) != 1){//validation check if the user type other than a floating value;
        printf("invalid input\n");
        while(getchar() != '\n');//cleaning the buffer;
        continue;//making the statement restart if the user typed other than a floating value;
    }
    choose=Choose;//input validation check for decimal's;
    if(choose<1 || choose>3 || choose != Choose){//validation check if the user type another number than 1,2,3;
        printf("Invalid input\n");
        continue;
    }
    break;//if everything right then break the infinite while loop;
}
    float side, radius, width, length;//declaring variables;
    if(choose==1){
        while(1){
            printf("Enter the value of side: ");
        if(scanf("%f", &side) != 1){//again input validation check;
            printf("Invalid input\n");
            while(getchar() != '\n');//again cleaning
            continue;//restart
        }
        break;//breaking
    }
        printf("The area of square is: %.2f\n", square(side)/*calling the square function*/);
        }
    else if(choose==2){
        while(1){
            printf("Enter the radius: ");
            if(scanf("%f", &radius) != 1){
                printf("Invalid input\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        }
        printf("The area of circle is: %.2f\n", circle(radius));
    }
    else if(choose==3){
        while(1){
            printf("Enter the width of the rectangle: ");
            if(scanf("%f", &width) != 1){
                printf("Invalid input\n");
                while(getchar() != '\n');
                continue;
            }
            printf("Enter the length of the rectangle: ");
            if(scanf("%f", &length) != 1){
                printf("Invalid input\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        }
        printf("The area of the rectangle is: %.2f\n", rectangle(width, length));
    }
return 0;
}