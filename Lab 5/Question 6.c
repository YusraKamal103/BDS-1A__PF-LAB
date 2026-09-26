
#include <stdio.h>
int main(){
   int choice;


 printf(" what do you want to do :\n1.Logistic\n2.Regression\n3.Decision Tree\n4.KNN\n5.Linear Regression\n6.Polynomial Regression\n7.SVR\n8.K-Means\n9.Hierchal Clustering\n10.DBSCAN\n11.CNN\n12.YOLO\n13.R-CNN");
    
    printf("Enter choice(1-13): \n");
    scanf("%d",&choice);

    switch (choice){
        case (1-4){
            printf("use classification");
            break;
        }
        case (5-7){
            printf("use regression");
            break;
        }
        case(8-10){
            printf("use clustering");
            break;
        }
        default {
            printf("use computer vision")
            break;
        }
    }


    return 0;
}