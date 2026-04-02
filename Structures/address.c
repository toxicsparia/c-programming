// Enter address (house no., block, city, state) of 5  peoples.
#include <stdio.h>
#include <string.h>

typedef struct address {
    char house_no[10];
    char block[30];
    char city[25];
    char state[20];
}add;

add info(int n);

int main(){
    add p1 = info(1);
    add p2 = info(2);
    add p3 = info(3);
    add p4 = info(4);
    add p5 = info(5);
    printf("\n");
    printf("The information of people 1\n");
    printf("House number: %s\n", p1.house_no);
    printf("Block: ");
    puts(p1.block);
    printf("city: ");
    puts(p1.city);
    printf("State: ");
    puts(p1.state);
    printf("\n");
    printf("The information of people 2\n");
    printf("House number: %s\n", p2.house_no);
    printf("Block: ");
    puts(p2.block);
    printf("City: ");
    puts(p2.city);
    printf("State: ");
    puts(p2.state);
    printf("\n");
    printf("The information of people 3\n");
    printf("House number: %s\n", p3.house_no);
    printf("Block: ");
    puts(p3.block);
    printf("city: ");
    puts(p3.city);
    printf("State: ");
    puts(p3.state);
    printf("\n");
    printf("The information of people 4\n");
    printf("House number: %s\n", p4.house_no);
    printf("Block: ");
    puts(p4.block);
    printf("city: ");
    puts(p4.city);
    printf("State: ");
    puts(p4.state);
    printf("\n");
    printf("The information of people 5\n");
    printf("House number: %s\n", p5.house_no);
    printf("Block: ");
    puts(p5.block);
    printf("city: ");
    puts(p5.city);
    printf("State: ");
    puts(p5.state);
    printf("\n");
    return 0;
}

add info(int n){
    add x;
    printf("Enter the info of number %d people\n", n);
    while(1){
    printf("Enter House no: ");
    if(scanf("%s", x.house_no) != 1){
        printf("Please enter a valid house no.\n");
        while(getchar() != '\n');
        continue;
    }
    while(getchar() != '\n');
    break;
    }
    while(1){
        printf("Enter block: ");
        if(fgets(x.block, 30, stdin) == NULL){
            printf("Invalid input please try again\n");
            continue;
        }
        x.block[strcspn(x.block, "\n")] = '\0';
        break;
    }
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
    return x;
}