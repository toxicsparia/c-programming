// Write a program that takes an integer (e.g., 12345) and reverses it (e.g., 54321) using a while loop.
#include <stdio.h>

// I need to do two works: 1. get the integer from user.. 2. reverse it so I declared here 2 functions..

int get_int(int *len);
void reverse(int n, int len);

int main(){
    // storing the user input into the n veriable.. and
    //I have use the len veriable to store the length of the number entered by the user.
    
    int len;

    // calling the function and passing the address of len to get the length into the len veriable... cal by reference..

    int n = get_int(&len); 
    reverse(n, len);
    return 0;
}

int get_int(int *len){
    // I will need 3 veriable 1. to store the user input; 2. use for determine the length of the entered number;
    // 3. using to count the number.

    int n, x, count=0;
    while(1){                            // checking input validation.. 1. number should be an integer; 2. ! n<1 ;
        printf("Enter a number: ");
        if(scanf("%d", &n) != 1){
            printf("Error: Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(n<1 || getchar() != '\n'){
            printf("Error: Enter an positive integer value\n");
            while(getchar() != '\n');
            continue;
        }

        /*
        1. giving the value of n to the x veriable cause I want to n value unchanged..
        2. I have used a simple math formula to get the length of the number..
            when we divide any number with 10.. eg. 545/10 = 54.5;
            and in c integer value always ignore the decimal value so this will keep 54 and ignore .5;
            so, I have to just know that how many times I have to divide the number to get 0...
            in each divide I have increased the count by 1 so I will get the length into my count veriable...
        3. I have assign the count value into the len pointer.. for pass by reference
        */

        x = n;
        do{
            x /= 10;
            count++;
        }while(x != 0);
        *len = count;

        break;
    }
    return n;
}

void reverse(int n, int len){

    /*
    1. I have created a array with the same size of the number length..
    2. we know that anynumber%10 will give the last digit of the number in reminder.. eg.. 545%10 = 5
    3. I have mixed the previous math and this formula together ..
        one give me the last digit and one cut off the last digit...
        so I keep the last digit into a veriable and the cut the last digit.. so 545 now becomes 54 and doing it for the all digits..
    */

    printf("Input: %d\nReversed: ", n);
    int i = 0;
    while(i<len){
        printf("%d", n%10);
        n /= 10;
        i++;
    }
    printf("\n");
}