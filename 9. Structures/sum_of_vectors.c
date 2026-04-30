// create a structure to store vectors. Then make a function to return the sum of 2 vectors.
#include <stdio.h> //heading

typedef struct vector{ //typedef is use for creating a short form name of our self defiend data type..
    float arr[2][2]; //creating a 2D array to store our vector 1 and 2 x, y data..
}vct; // this is our short form name of the data type... struct vector == vct;;;
vct store_return(); //creating a function

int main(){
    vct f_result = store_return(); // we are storing the ruturn value into a new vct...
    printf("The sum of 2 vectors is: %.2f, %.2f\n", f_result.arr[0][0], f_result.arr[1][0]); //printing the value;
    return 0;// code complete....
}

vct store_return(){ //defining the function
    vct vect; //creating a variable to store the data....
    while(1){ //creating a infinite loop to prevent wrong inputs
        printf("Enter the value of vector 1\n");
        printf("x: ");
        if(scanf("%f", &vect.arr[0][0]) != 1){ // storing the 1st vector's x data in [0][0];
            printf("Please enter a valid input\n"); /// If the input is invalid than this line would be printed..
            while(getchar() != '\n'); // clearing the input buffer;;
            continue; // re try...
        }
        break; //if everything okay break the loop;
    }
    // doing same for y and 2nd vector's x, y;
    while(1){
        printf("y: ");
        if(scanf("%f", &vect.arr[0][1]) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    while(1){
        printf("Enter the value of vector 2\n");
        printf("x: ");
        if(scanf("%f", &vect.arr[1][0]) != 1){
            printf("Please enter a valid inut\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    while(1){
        printf("y: "); 
        if(scanf("%f", &vect.arr[1][1]) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    }
    vct result; // creating a new variable with our self made data type..
    result.arr[0][0] = vect.arr[0][0] + vect.arr[1][0]; // x+x storing into our new variable [0][0] continer;
    result.arr[1][0] = vect.arr[0][1] + vect.arr[1][1]; //y+y storing into our new variable [1][0] continer;
    return result; // now returning the whole data..
}
