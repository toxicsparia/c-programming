//write a funtion to calculate parcentage of a student from marks of Science, Math and English;
#include <stdio.h>

float parcentage(float science, float math, float english);
float parcentage(float science, float math, float english){
    return (science+math+english)/300.0*100.0;
}
int main(){
    float science, math, english;
    while(1){
        printf("Enter your mark of Science (out of 100): ");
        if(scanf("%f", &science) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        else if(science<0 || science > 100){
            printf("Please enter a valid mark\n");
            continue;
        }
        break;
    }
        while(1){
        printf("Enter your mark of Math (out of 100): ");
        if(scanf("%f", &math) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        else if(math<0 || math>100){
            printf("Please enter a valid mark\n");
            continue;
        }
        break;
    }
        while(1){
        printf("Enter your mark of English (out of 100): ");
        if(scanf("%f", &english) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        else if(english<0 || english>100){
            printf("Please enter a valid mark\n");
            continue;
        }
        break;
    }
    printf("Your total number is: %.2f\n", science+math+english);
    printf("Your Parcentage is: %.2f\n", parcentage(science, math, english));
    return 0;
}