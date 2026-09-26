#include <stdio.h>

int main() {
    int choice;
    int num, base, exponent, result;
    int i;

    
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");
  
    printf("Enter your choice (1-5): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);

            if (num < 0) {
                printf("Invalid input: Cannot calculate square root of a negative number.\n");
            } else if (num == 0) {
                printf("Square root of %.2lf = 0.0000\n", num);
            } else {
               
                double guess = num / 2.0;
                for (i = 0; i < 1000; i++) {
                    guess = (guess + num / guess) / 2.0;
                }
                result = guess;
                printf("Square root of %.2lf = %.4lf\n", num, result);
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter exponent: ");
            scanf("%lf", &exponent);

            
            {
                double check = exponent;
                if (check < 0) check = 0 - check;
                while (check - 1 >= 0) {
                    check = check - 1;
                }


                if (check != 0) {
                    printf("Invalid input: Only integer exponents are supported.\n");
                    break;
                }
            }


            {
                double count = exponent;
                if (count < 0) count = 0 - count;

                double n = 0;
                result = 1.0;
                while (n < count) {
                    if (exponent >= 0) {
                        result = result * base;
                    } else {
                        result = result / base;
                    }
                    n = n + 1;
                }
            }
            printf("%.2lf ^ %.2lf = %.4lf\n", base, exponent, result);
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);

            if (num < 0) {
                result = 0 - num;
            } else {
                result = num;
            }
            printf("Absolute value of %.2lf = %.4lf\n", num, result);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num);


            {
                double whole = 0;
                if (num >= 0) {
                    while (whole + 1 <= num) {
                        whole = whole + 1;
                    }
                } else {
                    while (whole > num) {
                        whole = whole - 1;
                    }
                }
                result = whole;
            }
            printf("Floor of %.2lf = %.4lf\n", num, result);
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);

           
            {
                double whole = 0;
                if (num >= 0) {
                    while (whole < num) {
                        whole = whole + 1;
                    }
                } else {
                    while (whole - 1 >= num) {
                        whole = whole - 1;
                    }
                }
                result = whole;
            }
            printf("Ceiling of %.2lf = %.4lf\n", num, result);
            break;

        default:
            printf("Invalid menu choice. Please select a number between 1 and 5.\n");
            break;
    }

    return 0;
}