#include <stdio.h>
int main() {

    //Question 1:
    int mark1, mark2, mark3;
   int attendance;
   int total_marks;
   printf("Enter marks for programming :");
   scanf("%d", &mark1); 
   printf("Enter marks for maths :");   
   scanf("%d", &mark2);    
   printf("Enter marks for AI :");
   scanf("%d", &mark3); 
   printf("Enter attendance percentage :");
   scanf("%d", &attendance);   


   if (mark1 >= 50 && mark2 >= 50 && mark3 >= 50 && attendance >= 75) {
      total_marks = mark1 + mark2 + mark3;
      int avg;
        avg = total_marks / 3;
        printf("Average marks: %d\n", avg);
        if avg>= 80{
            printf("Excellent\n");  

        }
        else if avg>=70 {
            printf("Very Good\n");
        }
        else if avg>=60 {
            printf("Good\n");
        }
        else if avg>=50 {
            printf("Satisfactory\n");
        }
        else{
            printf("Poor\n");
        }
   } else {
      printf("Student is not eligible\n");
   }




   return 0;
}