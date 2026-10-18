#include <stdio.h>

int main()
{
    int shifts[4][3];
    int i, j;
    int target;

    printf("Enter initial production data (3 workstations x 3 shifts):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Workstation %d, Shift %d: ", i + 1, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }

    do
    {
        printf("\nEnter target row index for insertion (0 to 3): ");
        scanf("%d", &target);
    } while (target < 0 || target > 3);

    for (i = 3; i > target; i--)
    {
        for (j = 0; j < 3; j++)
        {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    printf("Enter the 3 new production values for the emergency shift:\n");
    for (j = 0; j < 3; j++)
    {
        printf("Value %d: ", j + 1);
        scanf("%d", &shifts[target][j]);
    }

    printf("\nUpdated Production Matrix:\n");
    printf("------------------------\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%6d", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}