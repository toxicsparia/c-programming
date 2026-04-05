// Make a program to input student information from a user & enter it to a file.
#include <stdio.h>
#include <string.h>

typedef struct student{ //creating a data type to store name and roll number;
    char name[100];
    int roll;
}stu;

int main(){
    FILE *fptr;// creating a file pointer
    fptr = fopen("new_file.txt", "a"); // opening the file in append mode... for avoiding data loss
    if(fptr == NULL){ // If the fopen failed to open or create the file then the program will return 1;
        printf("Error: trouble to open new_file.txt\n");
        return 1;
    }
    stu x; //creating a variable x;
    int n=1, j=1; // N for continue the loop... J for count the student:
    while(n==1){ // n=1 so this loop will run till n==1;
    printf("Enter student data.\n");
    printf("Name: ");
    while(1){
        if(fgets(x.name, 100, stdin) == NULL){ //using fgets to scan words with spaces and checking validation
            printf("Invalid input, please try again\n");
            continue;
    }
        x.name[strcspn(x.name, "\n")] = '\0'; // fgets containts extra new line before the null teriminator so replacing the '\n' with null pointer '\0'
        break;
    }
    while(1){
        printf("Roll number: ");
        if(scanf("%d", &x.roll) != 1){
            printf("Please enter a valid input\n");
            while(getchar() != '\n'); //cleaning the buffer to scan again without any problem
            continue;
        }
        break;
    }
        // Now writing the scanned data into the file.txt
        fprintf(fptr, "Student: %d\n", j);// This is same like printf but the extra thing is in the very first we have to write the FILE pointer name..
        fprintf(fptr, "NAME: %s\n", x.name);
        fprintf(fptr, "Roll Number: %d\n", x.roll);
        j++; // Increasing the J by 1.
    while(1){
        printf("Press '1' to add another student data\nPress '0' to end the program\n");
        if(scanf("%d", &n) != 1){ // If the user type another things then an integer value then it will return error and forcing to type again..
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        if(n != 0 && n != 1){ // If the user type other value the 0 and 1 then the program will force to type 1 or 2 and loop will continue..
            printf("Please enter a valid input\n");
            while(getchar() != '\n');
            continue;
        }
        break;
        }
        while(getchar() != '\n'); // clearing the final if any buffer still there..
    }
    fclose(fptr); // after done closing the file..
    return 0;
}