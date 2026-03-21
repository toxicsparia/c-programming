// Write a program to store the data of 3 students....
#include<stdio.h>
#include<string.h>

    struct student{  // creating a user defined data type with char for name and gender, int for roll no and cgpa with float..
        char name[50];
        int roll;
        float cgpa;
        char gender[10];
    };

     struct student storing_data(int n);// creating a function with self made data type

int main(){
    
    struct student s1 = storing_data(1); // calling the function and storing into a new variable with the same data type..
    struct student s2 = storing_data(2);
    struct student s3 = storing_data(3);

    //printing the data...
    printf("The data of First student\n");
    printf("Name: ");
    puts(s1.name);
    printf("Roll No: %d\t", s1.roll);
    printf("CGPA: %.2f\t", s1.cgpa);
    printf("Gender: %s\n", s1.gender);

    printf("The data of Second student\n");
    printf("Name: ");
    puts(s2.name);
    printf("Roll No: %d\t", s2.roll);
    printf("CGPA: %.2f\t", s2.cgpa);
    printf("Gender: %s\n", s2.gender);

    printf("The data of Third student\n");
    printf("Name: ");
    puts(s3.name);
    printf("Roll No: %d\t", s3.roll);
    printf("CGPA: %.2f\t", s3.cgpa);
    printf("Gender: %s\n", s3.gender);

return 0;
}

struct student storing_data(int n){ // defining the function...
    //data: name, roll no., cgpa, gender.
    struct student s; // creating a variale 's' with self defined data type..
    printf("Enter the information of student: %d\n", n);
    while(1){
    printf("Name: ");
    if(fgets(s.name, 50, stdin) == NULL){// if there's a error while inputing the s.name then the fgets function will return 'NULL'
        printf("Please enter a valid input\n");
        continue;
    }
    s.name[strcspn(s.name, "\n")] = '\0'; // strcspn (string complement span).. this helps to find the index of '\n'.. (it counts until it hits the \n).
    // so this is like if s.name = masud...       s.name[5] = '\0' .... this will replace the \n to \0 so this cut off the extra blank space(\n).
    break;
}
/*Umm there is a major bug:  if the user type any non alphabet like symbols or numbers it will also grab that
I will fix it later
There will be use of <ctype.h> library and isalpha() function to fix that bug....
*/
    while(1){
    printf("Roll No: ");
    if(scanf("%d", &s.roll) != 1){// data validation 
        printf("Invalid input\n");
        while(getchar() != '\n'); // flushing the buffer
        continue;
    }
    if(s.roll < 1){
        printf("Invalid input, try again\n");
        while(getchar() != '\n');
        continue;
    }
    break;
}
    while(1){
    printf("CGPA: ");
    if(scanf("%f", &s.cgpa) != 1){
        printf("Invalid input\n");
        while(getchar() != '\n');
        continue;
    }
    if(s.cgpa <1.0 || s.cgpa >10.0){
        printf("Invalid input, Please try again\n");
        while(getchar() != '\n');
        continue;
    }
    break;
}
    while(1){
    printf("For male (M) & For female (F)\n");
    printf("Gender: ");
        if(scanf("%s", s.gender) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }
        int valid = 0;// creating a variable with 0
        if(strcmp(s.gender, "M") == 0){ // string comparison... if the input and the "M" is same then this will return 0....
            valid = 1; // valid true
        }
        else if(strcmp(s.gender, "F") == 0){
            valid = 1;
        }
        if(valid == 0){ // if the valid is still 0 then it will be print this statement and continue;
            printf("Please enter a valid input (M/F):\n");
            while(getchar() != '\n');
            continue;
        }
        while(getchar() != '\n'); //after all flush again for the next student data....
    break;
    }
    return s;// finally return the variable...
}