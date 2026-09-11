
#include <stdio.h>
int main(){
    
    int score;
    printf("Enter your confidence score:  ");
    scanf("%d",&score);
    
    if (score<0 || score>100){
        printf("Invalid score\n");
    }
    else if (score>=0 && score<=49) {
        printf("Low Confidence\n");
    }
    else if (score>=50 && score<=79) {
        printf("Moderate Confidence\n");
    }
    else if (score>=80 && score<=100) {
        printf("High Confidence\n");
    }


 return 0;

}