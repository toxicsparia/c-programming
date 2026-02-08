//QS. write a programme to give grades to a student
#include <stdio.h>

int main(void){
    int tm;
    printf("Enter your total number [1 - 100]\n");
    if (scanf("%d", &tm) != 1){
        printf("invalid input");
        return 1;
    }
if (tm < 0 || tm > 100){
    printf("This is the invalid number\n");
}
else if (tm <= 30){
    printf("Your grade is 'C'\n");
}
else if (tm  <= 70){
    printf("Your grade is 'B'\n");
}
else if (tm <= 90){
    printf("Your grade is 'A'\n");
}
else if (tm <= 100){
    printf("Your grade is 'A+'\n");
}
    return 0;
}