#include <stdio.h>
int main(){
    char code[6];
    printf("enter library code");
    scanf("%5s",&code);
    

    j=5;
    for (int i=0;i<=5/2;i++){
        if (code[j]!=code[i]){
            printf("code not valid");
            break;
        }

        j--;


    }


    
    return 0;

}