#include <stdio.h>
#include <string.h>

int main()
{
    char username[50], password[50];
    char fileUser[50], filePass[50];
    FILE *fptr;

    printf("Enter username: ");
    scanf("%49s", username);

    printf("Enter password: ");
    scanf("%49s", password);

    fptr = fopen("credentials.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: File Not Found!\n");
        return 1;
    }

    fscanf(fptr, "%49s %49s", fileUser, filePass);

    if (strcmp(username, fileUser) == 0 && strcmp(password, filePass) == 0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");

    fclose(fptr);

    return 0;
}
