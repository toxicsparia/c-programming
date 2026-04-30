// Enter address (house no., block, city, state) of 5  peoples.
#include <stdio.h>
#include <string.h>

typedef struct address { // creating a struct
    char house_no[10];
    char block[30];
    char city[25];
    char state[20];
}add;

add info(int n); //creating a funciton for inputing the informations
void print_info(add *ptr, int n); // creating a function for printing the informations

int main(){
    //calling the function and storing them into a new struct variable....
    add a = info(1);
    add b = info(2);
    add c = info(3);
    add d = info(4);
    add e = info(5);
    // calling the printing function and passing the argumants using address pinters.
    print_info(&a, 1);
    print_info(&b, 2);
    print_info(&c, 3);
    print_info(&d, 4);
    print_info(&e, 5);
    return 0;
}

add info(int n){ //declaring the input function
    add x; // creating a variable x with our self made data type/struct.
    printf("Enter the info of number %d people\n", n);
    while(1){ // creating a infinite loop for preventing from wrong inputs...
    printf("Enter House no: ");
    if(scanf("%s", x.house_no) != 1){ // house_no. is a string value so we are using %s...
        printf("Please enter a valid house no.\n");
        while(getchar() != '\n'); // clearing the input buffer
        continue;// retry if wrong
    }
    while(getchar() != '\n'); //also clearing the buffer if true ..
    break; // break the loop
    }
    while(1){
        printf("Enter block: ");
        if(fgets(x.block, 30, stdin) == NULL){ //using fgets cause block can contain multiple words... and %s just input's one word.. 
            printf("Invalid input please try again\n");
            continue;
        }
        x.block[strcspn(x.block, "\n")] = '\0'; //cutting the extra line using string complement span / strcspn - 
        // it's searching for '\n' into x.block and replacing the value with '\0'
        break; // break the loop;
    }
    // doing same with rest of them
    while(1){
        printf("Enter city: ");
        if(fgets(x.city, 25, stdin) == NULL){
            printf("Invalid input\n");
            continue;
        }
        x.city[strcspn(x.city, "\n")] = '\0';
        break;
    }
    while(1){
        printf("Enter State: ");
        if(fgets(x.state, 20, stdin) == NULL){
            printf("Invalid input\n");
            continue;
        }
        x.state[strcspn(x.state, "\n")] = '\0';
        break;
    }
    return x; // returning the whole struct variable 'x'
}

void print_info(add *ptr, int n){// declaring the printing function and taking the argumants with pointers...
    printf("\n");
    printf("The information of people %d\n", n);
    printf("House number: %s", (*ptr).house_no); //  instead of this we can also use ptr->house)no (replace of dot operator)
    printf("\n");
    printf("Block: ");
    puts((*ptr).block);
    printf("city: ");
    puts((*ptr).city);
    printf("State: ");
    puts((*ptr).state);
    printf("\n");
    return;
}