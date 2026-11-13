#include <stdio.h>

void withdraw(float *bal, float amt) {
    if (amt <= *bal) {
        *bal -= amt;
        printf("Withdrawal successful!\n");
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *bal, float amt) {
    *bal += amt;
    printf("Deposit successful! Updated balance: %.2f\n", *bal);
}

int main() {
    float bal = 10000.0, amt;
    int choice;

    printf("Enter initial balance: ");
    scanf("%f", &bal);

    printf("Select transaction type (1 for Debit/Withdraw, 2 for Credit/Deposit): ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amt);

    if (choice == 1) {
        withdraw(&bal, amt);
    } else if (choice == 2) {
        deposit(&bal, amt);
    } else {
        printf("Invalid transaction type.\n");
    }

    printf("Final Account Balance: %.2f\n", bal);
    return 0;
}
