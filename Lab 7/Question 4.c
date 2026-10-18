#include <stdio.h>

int main()
{
    char word_grid[3][100];
    char word[100];
    int i, j, k, pos;
    int len;
    int maxLen = 0;
    int maxRow = 0;
    int maxCol = 0;
    char longest[100] = "";

    for (i = 0; i < 3; i++)
    {
        printf("Enter row %d (3 space-separated words): ", i + 1);
        scanf(" %99[^\n]", word_grid[i]);
        while (getchar() != '\n');
    }

    for (i = 0; i < 3; i++)
    {
        pos = 0;

        for (j = 0; j < 3; j++)
        {
            while (word_grid[i][pos] == ' ')
            {
                pos++;
            }

            k = 0;
            while (word_grid[i][pos] != ' ' && word_grid[i][pos] != '\0')
            {
                word[k++] = word_grid[i][pos++];
            }
            word[k] = '\0';

            len = k;

            if (len > maxLen)
            {
                maxLen = len;
                maxRow = i;
                maxCol = j;
                for (k = 0; k <= len; k++)
                {
                    longest[k] = word[k];
                }
            }
        }
    }

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    printf("Row Index (i): %d\n", maxRow);
    printf("Column Index (j): %d\n", maxCol);

    return 0;
}