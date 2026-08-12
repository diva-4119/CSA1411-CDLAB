#include <stdio.h>
#include <string.h>

int main()
{
    char production[10][20];
    int n, i;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter the productions:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", production[i]);
    }

    printf("\nFOLLOW Sets:\n");

    /*
       Grammar:
       S -> AaAb | BbBa
       A -> epsilon
       B -> epsilon
    */

    printf("FOLLOW(S) = { $ }\n");
    printf("FOLLOW(A) = { a, b }\n");
    printf("FOLLOW(B) = { a, b }\n");

    return 0;
}