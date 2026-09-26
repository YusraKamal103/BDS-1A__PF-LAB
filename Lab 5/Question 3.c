#include <stdio.h>
int main() {
    int C, SC;

    printf("=== Image Classification System ===\n");
    printf("Select a Category:\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &C);

    switch (C) {

        case 1: // Animal
            printf("\nAnimal Subcategories:\n");
            printf("1. Cat\n2. Dog\n3. Bird\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &SC);

            switch (SC) {
                case 1:
                    printf("\nResult: Animal -> Cat\n");
                    break;
                case 2:
                    printf("\nResult: Animal -> Dog\n");
                    break;
                case 3:
                    printf("\nResult: Animal -> Bird\n");
                    break;
                default:
                    printf("\nInvalid subcategory choice.\n");
            }
            break;

        case 2: // Vehicle
            printf("\nVehicle Subcategories:\n");
            printf("1. Car\n2. Bus\n3. Bike\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &SC);

            switch (SC) {
                case 1:
                    printf("\nResult: Vehicle -> Car\n");
                    break;
                case 2:
                    printf("\nResult: Vehicle -> Bus\n");
                    break;
                case 3:
                    printf("\nResult: Vehicle -> Bike\n");
                    break;
                default:
                    printf("\nInvalid subcategory choice.\n");
            }
            break;

        case 3: // Food
            printf("\nFood Subcategories:\n");
            printf("1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &SC);

            switch (SC  ) {
                case 1:
                    printf("\nResult: Food -> Pizza\n");
                    break;
                case 2:
                    printf("\nResult: Food -> Burger\n");
                    break;
                case 3:
                    printf("\nResult: Food -> Biryani\n");
                    break;
                default:
                    printf("\nInvalid subcategory choice.\n");
            }
            break;

        case 4: // Human
            printf("\nHuman Subcategories:\n");
            printf("1. Male\n2. Female\n3. Child\n");
            printf("Enter choice (1-3): ");
            scanf("%d", &SC);

            switch (SC) {
                case 1:
                    printf("\nResult: Human -> Male\n");
                    break;
                case 2:
                    printf("\nResult: Human -> Female\n");
                    break;
                case 3:
                    printf("\nResult: Human -> Child\n");
                    break;
                default:
                    printf("\nInvalid subcategory choice.\n");
            }
            break;

        default:
            printf("\nInvalid category choice.\n");
    }

    return 0;
}