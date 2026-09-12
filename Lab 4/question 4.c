#include <stdio.h>
int main() {
    int accuracy = 0;
    int prediction = 0;
    int approval_status = 0;

    printf("Enter the accuracy of the model: ");
    scanf("%d", &accuracy);
    printf("Enter the prediction latency of the model: ");
    scanf("%d", &prediction);   
    printf("Enter the approval status of the model (1 for approved, 0 for not approved): ");
    scanf("%d", &approval_status);  

    if (accuracy>=90 && prediction<=100 && approval_status==1)
    {
        printf("Model is ready for deployment\n");
    }
    else
    {
       if(accuracy<90)
       {
            printf("Model accuracy is low\n");
        
       }
       if(prediction>100)
       {
            printf("Model prediction latency is high\n");
        
       }
       if(approval_status==0)
       {
            printf("Model is not approved \n");         

    }
    }
    return 0;
}
