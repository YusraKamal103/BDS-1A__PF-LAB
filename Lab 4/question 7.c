#include <stdio.h>
int main() {
    int data_used;
    int price_per_gb;
    int final,discount,basic;

    printf("Enter data used in GB: ");
    scanf("%d", &data_used);
    printf("Enter price per GB: ");
    scanf("%d", &price_per_gb); 
    basic = data_used * price_per_gb;

    if (data_used < 50){
        
        printf("Total bill: %d\n", basic);
        printf("Discount: 0\n");
    }
    else if (data_used >= 50 && data_used < 100){
        
        discount = basic * 0.05;
        final = basic - discount;
        printf("initial bill: %d\n", basic);
        printf("final bill: %d\n", final);
        printf("Discount: %d\n", discount);
    }
    else if (data_used >=100 && data_used < 200){
        
        discount = basic * 0.10;
        final = basic - discount;
        printf("initial bill: %d\n", basic);
        printf("final bill: %d\n", final);
        printf("Discount: %d\n", discount);
    }
    else if (data_used >= 200){
        
        discount = basic * 0.15;
        final = basic - discount;
        printf("initial bill: %d\n", basic);
        printf("final bill: %d\n", final);
        printf("Discount: %d\n", discount);
    }
        

    


    return 0;
}   