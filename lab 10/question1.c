#include <stdio.h>
#include <string.h>

int main()
{
    char review[500];
    char updated[1500];
    char *pos, *start;
    int hasGood, hasBad;

    printf("Enter customer feedback: ");
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = '\0';

    printf("Total characters: %d\n", (int)strlen(review));

    hasGood = strstr(review, "good") != NULL;
    hasBad = strstr(review, "bad") != NULL;

    printf("\nSentiment Report\n");
    if (hasGood && hasBad)
        printf("Mixed feedback: both \"good\" and \"bad\" found\n");
    else if (hasGood)
        printf("Positive feedback: \"good\" found\n");
    else if (hasBad)
        printf("Negative feedback: \"bad\" found\n");
    else
        printf("Neutral feedback: no keyword found\n");

    if (hasBad)
    {
        strcpy(updated, "");
        start = review;

        while ((pos = strstr(start, "bad")) != NULL)
        {
            strncat(updated, start, pos - start);
            strcat(updated, "not good");
            start = pos + 3;
        }
        strcat(updated, start);

        printf("\nUpdated review: %s\n", updated);
    }

    return 0;
}
