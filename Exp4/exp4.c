#include <stdio.h>

int main()
{
    char input[100];
    int i = 0;

    printf("Enter an expression:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0')
    {
        if (input[i] == '+')
            printf("Operator: +\n");

        else if (input[i] == '-')
            printf("Operator: -\n");

        else if (input[i] == '*')
            printf("Operator: *\n");

        else if (input[i] == '/')
            printf("Operator: /\n");

        i++;
    }

    return 0;
}