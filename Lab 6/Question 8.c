#include <stdio.h>
int main(){
   int num_array[8];

   for(int i=0;i<8;i++){
        printf("Enter the number %d: ",i+1);
        scanf("%d",&num_array[i]);
    }

    for(int i=0;i<8;i++){
        printf("The number %d is: %d\n",i+1,num_array[i]);
    }

    int max,min;
    max = num_array[0];
    for(int i=1;i<8;i++){
        if(num_array[i]>max){
            max = num_array[i];
        }
    }
    min = num_array[0];
    for(int i=1;i<8;i++){
        if(num_array[i]<min){
            min = num_array[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    printf("Enter the number to search: ");
    int search; 
    scanf("%d", &search);
    for(int i=0;i<8;i++){
        if(num_array[i]==search){
            printf("The number %d is found at index %d\n",search,i);
            break;
        }
    }
    
    printf("Enter the number to insert: ");
    int insert;
    scanf("%d", &insert);

    printf("Enter the index to insert: ");
    int index;  

    scanf("%d", &index);
    

    num_array[index] = insert;

    printf("Enter the index to delete: ");
    int delete_index;   
    scanf("%d", &delete_index);

    num_array[delete_index] = 0;

    printf("The updated array is: ");
    for(int i=0;i<8;i++){
        printf("%d ", num_array[i]);
    }   

    return 0;
}