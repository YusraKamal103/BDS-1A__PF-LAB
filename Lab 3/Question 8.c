#include <stdio.h>

int  main() {
	char name[100];
	printf("Enter your full name: ");
	fgets(name,100,stdin);
	printf("Hello,\n");
	printf("%s",name);
	
	
 	return 0;
}
