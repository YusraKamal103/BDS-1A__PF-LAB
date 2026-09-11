
#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    float cgpa;
    char grade[20];

    printf("Enter student name:");
    fgets(name,50,stdin);
    printf("Enter Age: ");
    scanf("%d",&age);
    getchar();
    printf("Enter Grade: ");
    fgets(grade,20,stdin);
    printf("Enter height: ");
    scanf("%f",&height);
    printf("Enter CGPA: ");
    scanf("%f",&cgpa);

    printf("==========STUDENT REPORT============\n");
    printf("Name: %s",name);
    printf("Age: %d\n",age);
    printf("Grade: %s",grade);
    printf("Height: %.2f\n",height);
    printf("CGPA: %.2f\n",cgpa);
    



    return 0;

}