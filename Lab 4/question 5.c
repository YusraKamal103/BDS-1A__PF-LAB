
#include <stdio.h>
int main() {
    int role,acc_status,security_level;
    //role 1=admin,2=researcher,3=student
    //acc_status 1=active,0=inactive
    //security_level 1-5

    printf("Enter your role (1=admin, 2=researcher, 3=student): ");
    scanf("%d", &role);
    printf("Enter your account status (1=active, 0=inactive): ");
    scanf("%d", &acc_status);
    printf("Enter your security level (1-5): ");
    scanf("%d", &security_level);   

    if(acc_status == 1) {
        if(role == 1 && security_level >=3) {
            printf("Access granted: Admin privileges.\n");
        } else if(role == 2 && security_level >= 2) {
            printf("Access granted: Researcher privileges.\n");
        } else if(role == 3 && security_level >= 1) {
            printf("Access granted: Student privileges.\n");
        } else {
            printf("Access denied: Insufficient security level.\n");
        }
    } else {
        printf("Access denied: Account is inactive.\n");
    }


    return 0;

}