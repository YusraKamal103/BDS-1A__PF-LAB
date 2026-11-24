#include <stdio.h>
#include <stdlib.h>

struct Item {
    int id;
    char name[30];
    int qty;
    float price;
};

int main() {
    struct Item *a = (struct Item *)malloc(5 * sizeof(struct Item));
    int i, sid, f = 0;
    float total = 0;

    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Item %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &a[i].id);
        printf("Name: ");
        scanf("%s", a[i].name);
        printf("Quantity: ");
        scanf("%d", &a[i].qty);
        printf("Unit Price: ");
        scanf("%f", &a[i].price);
        total += a[i].qty * a[i].price;
        printf("\n");
    }

    printf("Total Inventory Value: %.2f\n\n", total);

    printf("Enter Item ID to search: ");
    scanf("%d", &sid);

    for (i = 0; i < 5; i++) {
        if (a[i].id == sid) {
            printf("\nItem Found\n");
            printf("ID: %d\n", a[i].id);
            printf("Name: %s\n", a[i].name);
            printf("Quantity: %d\n", a[i].qty);
            printf("Unit Price: %.2f\n", a[i].price);
            f = 1;
            break;
        }
    }

    if (!f)
        printf("Item not found.\n");

    free(a);
    return 0;
}
