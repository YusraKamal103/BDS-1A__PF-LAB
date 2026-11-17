#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int accNo;
    float amount;
    FILE *fptr;

    printf("Enter customer name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter account number: ");
    scanf("%d", &accNo);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    fptr = fopen("bank_log.txt", "a");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fptr, "Name: %s | Account: %d | Withdrawal: %.2f\n", name, accNo, amount);
    fclose(fptr);

    printf("Transaction saved successfully\n");

    return 0;
}
