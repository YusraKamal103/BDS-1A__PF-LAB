#include <stdio.h>
int main(){
    int total = 0;
    int missing = 0;    
    int duplicate = 0;
    int missing_percentage = 0; 
    int duplicate_percentage = 0;

    printf("Enter the total number of records: ");
    scanf("%d", &total);        
    printf("Enter the number of missing records: ");
    scanf("%d", &missing);
    printf("Enter the number of duplicate records: ");
    scanf("%d", &duplicate);    

        if (total <= 0)
    {
            printf("Invalid Dataset\n");
    }
    
        missing_percentage = (missing * 100) / total;
        duplicate_percentage = (duplicate * 100) / total;

       

        if (missing_percentage > 30)
        {
            printf("Poor Quality Dataset\n");
        }
        else if (duplicate_percentage > 20 && missing_percentage <= 30)
        {
            printf("Dataset Requires Cleaning\n");
        }
        else
        {
            printf("Dataset Ready for Training\n");
        }
    
    return 0;

}