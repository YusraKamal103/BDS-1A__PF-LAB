#include <stdio.h>
int main(){
    int pin,digit,total=0;
    printf("Enter a 4 digit pin: ");
    scanf("%d",pin);

    while (pin>0){

        digit=pin%10;
        total+=digit;
        int temp;
        temp=pin /10;
        pin=temp;

        if (total>10){
            printf("Password is weak");
        }
        else {
            printf ("weak password");
        }

    }




    return 0;
}