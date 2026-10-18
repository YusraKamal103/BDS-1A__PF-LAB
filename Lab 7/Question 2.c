#include <stdio.h>

int main()
{
    char logs[3][30];
    int i, j, k;
    int count = 0;

    for (k = 0; k < 3; k++)
    {
        printf("Enter log entry %d (username,status,timestamp): ", k + 1);
        scanf(" %29[^,],%29[^,],%29[^,\n]", logs[0], logs[1], logs[2]);

        while (getchar() != '\n');

        for (i = 0; i < 3; i++)
        {
            for (j = 0; logs[i][j] != '\0'; j++)
            {
                if (logs[i][j] >= 'A' && logs[i][j] <= 'Z')
                {
                    count++;
                }
            }
        }
    }

    printf("\nTotal uppercase letters: %d\n", count);

    return 0;
}