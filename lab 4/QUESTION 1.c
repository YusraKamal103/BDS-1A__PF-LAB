#include <stdio.h>

int main() {

    char name[100];
    char city [100];
    int age ;

    printf("Enter your name ?\n");
    fgets(name,100,stdin);
    
    printf("Enter your city ?\n");
    fgets(city,100,stdin);

    printf("Enter your age ?\n");
    scanf("%d",&age);
    

    printf("Name:%s",name);
    printf("Age:%d\n",age);
    printf("City:%s",city);

    

    return 0;
}
