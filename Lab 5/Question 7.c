#include <stdio.h>
int main(){
    int score , threshold;
    printf("Enter confidence score: ");
    scanf("%d",&score);
    printf("Enter required threshold: ");
    scanf("%d",&threshold);

    if score >=90 {
        printf("Very High");

    }
    else if score >=75 {
        printf("High");
    }
    else if score >= 50 {
        printf("MOderate");
    }
    else {
        printf("Low");
    }
    
    if score >= threshold && score >=50 {
        printf ("Accepted");
    }
    else {
        printf("Not Accepted");
    }

    return 0;

}