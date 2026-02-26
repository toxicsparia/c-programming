//write 2 functions - one to print "Hello" & second to print "Good bye"
#include <stdio.h>

void Hello();//declaration/prototype;
void Good_bye();
int main(){
    Hello();//function call;
    Good_bye();
    return 0;
}
//function definition;
void Hello(){
    printf("Hello\n");
}
void Good_bye(){
    printf("Good_bye\n");
}