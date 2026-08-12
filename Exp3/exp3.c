#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[1000];
    int i = 0;

    printf("Enter a line:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0')
    {
        /* Ignore spaces and tabs */
        if (input[i] == ' ' || input[i] == '\t')
        {
            i++;
            continue;
        }

        /* Ignore single-line comments */
        if (input[i] == '/' && input[i + 1] == '/')
        {
            break;
        }

        /* Print other characters */
        printf("%c", input[i]);

        i++;
    }

    return 0;
}