#include <stdio.h>

int main()
{
    char student_names[3][50];
    int marks[3][3];
    int i, j;
    int sum;
    float average;

    for (i = 0; i < 3; i++)
    {
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }

        while (getchar() != '\n');
    }

    printf("\n%-5s %-30s %-10s\n", "No.", "Name", "Average");
    printf("------------------------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += marks[i][j];
        }
        average = sum / 3.0;
        printf("%-5d %-30s %-10.2f\n", i + 1, student_names[i], average);
    }

    return 0;
}