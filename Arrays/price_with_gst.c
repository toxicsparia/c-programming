//write a program to enter price of 3 items & print their final cost with gst.

#include <stdio.h>

#define GST_RATE 0.18

float getPrice(int item_num);

int main() {
    float price[3], total_price, gst_bill, total_bill;

    price[0] = getPrice(1);
    price[1] = getPrice(2);
    price[2] = getPrice(3);

    total_price = price[0] + price[1] + price[2];
    gst_bill    = total_price * GST_RATE;
    total_bill  = total_price + gst_bill;

    printf("Total price : %.2f\n", total_price);
    printf("GST (18%%)   : %.2f\n", gst_bill);
    printf("Payable     : %.2f\n",  total_bill);

    return 0;
}

float getPrice(int item_num) {
    float n;
    while (1) {
        printf("Enter price for item %d: ", item_num);
        if (scanf("%f", &n) != 1) {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n');
            continue;
        }
        if (n <= 0) {
            printf("Price must be positive. Try again.\n");
            continue;
        }
        break;
    }
    return n;
}