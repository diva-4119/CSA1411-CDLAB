#include <stdio.h>
#include <string.h>

int main()
{
    char line[500];

    printf("Enter a line:\n");
    fgets(line, sizeof(line), stdin);

    if (strncmp(line, "//", 2) == 0)
    {
        printf("It is a single-line comment.\n");
    }
    else if (strncmp(line, "/*", 2) == 0)
    {
        printf("It is the beginning of a multi-line comment.\n");
    }
    else
    {
        printf("It is not a comment.\n");
    }

    return 0;
}