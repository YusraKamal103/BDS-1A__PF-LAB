#include <stdio.h>
int main() {

    int age ,income, score ;
    char loan;

    printf("Enter your age :");
    scanf("%d", &age);  
    printf("Enter your income :");
    scanf("%d", &income);   
    printf("Enter your credit score :");
    scanf("%d", &score);    
    printf("Do you have any existing loan (y/n) :");
    scanf(" %c", &loan);

    if (age>=21 && income>=100000&& score>=750 && loan=='n') {
        printf("High approval chance\n");
    } 
    else if age>=21 && income>=75000 && score>=650 && loan =='y' {
        printf("MAnual Review\n");
    }
    else if age>=21 && income>=50000 && score>=600  {
        printf("Possibly Eligible\n");
    }
    else{
        printf("Rejected - Doesnot meet the criteria\n");
    }

    return 0;
}