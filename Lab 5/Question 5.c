#include <stdio.h>
int main(){
    int score , user, flag ;
    printf("Enter confidence score : \n");
    scanf("%d", &score);
    printf ("Enter user type (1:Authorized, 2:Unauthorized) : \n");
    scanf("%d", &user);

    if (score>=80 && user == 1){
       flag = 1;

    }
    else if (score>=80){
        flag = 2;
    }
    else if (score>=50 && score <=79){
        flag = 3;
    }
    else if (score<50 && user ==0){
        flag = 4;
    }
   
    if flag <3 {

        flag == 1?printf("Access Granted\n"):printf("Face Recognized\n");
    }
    else {
        flag == 3?printf("MAnual Verification\n"):printf("Access Denied\n");
    }

    return 0;
}