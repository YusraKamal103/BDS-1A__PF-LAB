#include <stdio.h>

float calculateDiscount(float amt, char type) {
    float rate = 0.0;
    if (type == 'P' || type == 'p') {
        rate = 0.20;
    } else if (type == 'G' || type == 'g') {
        rate = 0.10;
    } else if (type == 'S' || type == 's') {
        rate = 0.05;
    }
    if (amt > 10000) {
        rate += 0.02;
    }
    return amt * rate;
}

float calculateFinalBill(float disc_amt) {
    float tax = disc_amt * 0.15;
    float ship = (disc_amt <= 5000) ? 300 : 0;
    return disc_amt + tax + ship;
}

int main() {
    float amt, disc, disc_amt, final;
    char type;

    printf("Enter shopping amount: ");
    scanf("%f", &amt);
    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);

    disc = calculateDiscount(amt, type);
    disc_amt = amt - disc;
    final = calculateFinalBill(disc_amt);

    printf("Final Payable Amount: %.2f PKR\n", final);
    return 0;
}
