#include <stdio.h>

int main()
{
    char secret_messages[3][100];
    int spaces[3];
    int words[3];
    int i, j;
    int inWord;

    for (i = 0; i < 3; i++)
    {
        secret_messages[i][0] = '\0';
        printf("Enter message %d: ", i + 1);
        scanf("%99[A-Z ]", secret_messages[i]);

        while (getchar() != '\n');
    }

    for (i = 0; i < 3; i++)
    {
        spaces[i] = 0;
        words[i] = 0;
        inWord = 0;

        for (j = 0; secret_messages[i][j] != '\0'; j++)
        {
            if (secret_messages[i][j] == ' ')
            {
                spaces[i]++;
                inWord = 0;
            }
            else if (inWord == 0)
            {
                words[i]++;
                inWord = 1;
            }
        }
    }

    printf("\n%-5s %-40s %-8s %-6s\n", "No.", "Filtered Message", "Spaces", "Words");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("%-5d %-40s %-8d %-6d\n", i + 1, secret_messages[i], spaces[i], words[i]);
    }

    return 0;
}