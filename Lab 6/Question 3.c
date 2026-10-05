#include <stdio.h>
int main(){
    int present , absent , flag  ;

    for(int i ; i<=30;i++){
        printf("Enter 1: present 0:absent\n");
        scanf("%d",flag);

        if (flag==1){
            present+=1;

        }
        else{
            absent+=1;
        }
    }
    printf("Total present are %d\n ",present);
    printf("Total absent are %d\n",absent);

    return 0;

}