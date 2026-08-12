#include <stdio.h>
#include <ctype.h>

int main()
{
    char id[100];
    int i = 0;
    int valid = 1;

    printf("Enter an identifier: ");
    scanf("%s", id);

    /* First character */
    if (!(isalpha(id[0]) || id[0] == '_'))
    {
        valid = 0;
    }

    /* Remaining characters */
    for (i = 1; id[i] != '\0'; i++)
    {
        if (!(isalnum(id[i]) || id[i] == '_'))
        {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid identifier\n");
    else
        printf("Invalid identifier\n");

    return 0;
}