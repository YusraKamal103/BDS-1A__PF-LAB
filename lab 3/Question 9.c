
#include <stdio.h>

int  main() {
	
	char product;
	int quantity;
	float price;
	
	printf("Enter product name: ");
	scanf("%s",&product);
	printf("enter quantity: ");
	scanf("%d",&quantity);
	printf("Enter amount: ");
	scanf("%f",&price);
	
	printf("Product name: %s\n",product);
	printf("quantity: %d\n",quantity);
	printf("Amount: %.3f",price);

	
 	return 0;
}
