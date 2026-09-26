#include <stdio.h>

int main() {
    int permission;

    printf("Enter user's permission value: ");
    scanf("%d", &permission)
   

    printf("\nPermission value: %d\n", permission);

    printf("View    : %s\n", (permission & 1) ? "Allowed" : "Not Allowed");
    printf("Train   : %s\n", (permission & 2) ? "Allowed" : "Not Allowed");
    printf("Test    : %s\n", (permission & 4) ? "Allowed" : "Not Allowed");
    printf("Deploy  : %s\n", (permission & 8) ? "Allowed" : "Not Allowed");


    if ((permission & 2) && (permission & 8)) {
        printf("Result  : User has BOTH Training and Deployment permissions.\n");
    } else {
        printf("Result  : User does NOT have both Training and Deployment permissions.\n");
    }

    return 0;
}