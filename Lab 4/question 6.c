#include <stdio.h>  
int main() {
    int obstacle,person,battery;
    //obstacle 1= detected, 0= not detected
    //person 1= detected, 0= not detected
    //battery percentage 0-100

    printf("Enter obstacle detection status (1=detected, 0=not detected): ");
    scanf("%d", &obstacle);
    printf("Enter person detection status (1=detected, 0=not detected): ");
    scanf("%d", &person);
    printf("Enter battery percentage (0-100): ");
    scanf("%d", &battery);      

    if (obstacle==1){
        if (person==1){
            printf("emergency stop\n");
        }
        else{
            printf("change direction\n");
        }
    }
    else if (battery<20){
        printf("return to charging station\n");
    }
    else{
        printf("continue moving\n");
    }
    return 0;
}