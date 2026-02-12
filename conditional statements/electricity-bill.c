/*
3. Electricity Bill Calculator
o Take units consumed as input
o Apply tariff: First 100 units @ ₹5/unit, next 150 units @ ₹7/unit, rest @ ₹10/unit
o Add 10% surcharge if bill > 500
o Display final bill
*/
#include <stdio.h>

int main(){
    float unit, bill, final_bill, surcharge;
    printf("Enter here consumed unit \n");
    if(scanf("%f", &unit) != 1){
        printf("invalid input \n");
        return 1;
    }
    else if(unit <= 0){//checking validation for 0 or negative numbers
        printf("unit can't be zero or negetive \n");
        printf("please enter a valid input \n");
        return 1;
    }
    else if(unit <= 100){//there isn't need for surcharge formula because there bill can go upto maximum 500 rs and we need surcharge for above 500
        printf("Bill : %.2f \n", unit * 5);
    }
    else if(unit <= 250){
        bill = (unit-100)*7+500;//first 100 unit 5 rs / unit, rest 7 rs/unit.
        surcharge = (bill * 0.1);//calculating 10% surcharge
        final_bill = bill + surcharge;
        printf("Bill : %.2f \n", final_bill);
    }
    else if(unit > 250){
        bill =(unit-250)*10+1550;//first 100*5 = 500; next 150 * 7 = 1050 (500+1050=1550); rest unit * 10
        surcharge = (bill* 0.1);//10% surcharge
        final_bill = bill + surcharge;
        printf("Bill : %.2f \n", final_bill);
    }
return 0;
}