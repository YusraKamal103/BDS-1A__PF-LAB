#include <stdio.h>

int main()
{
    char sentences[3][100];
    int vowels[3];
    int i, j;
    char ch;

    printf("Enter a paragraph with 3 sentences separated by semicolons:\n");

    for (i = 0; i < 3; i++)
    {
        sentences[i][0] = '\0';
        scanf(" %99[^;]", sentences[i]);
        scanf("%*c");
    }

    for (i = 0; i < 3; i++)
    {
        vowels[i] = 0;

        for (j = 0; sentences[i][j] != '\0'; j++)
        {
            ch = sentences[i][j];

            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels[i]++;
            }
        }
    }

    printf("\n%-5s %-40s %-8s\n", "No.", "Sentence", "Vowels");
    printf("------------------------------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("%-5d %-40s %-8d\n", i + 1, sentences[i], vowels[i]);
    }

    return 0;
}