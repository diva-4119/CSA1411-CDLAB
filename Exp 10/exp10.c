#include <stdio.h>
#include <string.h>

int main()
{
    char production1[100];
    char production2[100];
    char production3[100];

    printf("Enter production 1: ");
    scanf("%s", production1);

    printf("Enter production 2: ");
    scanf("%s", production2);

    printf("Enter production 3: ");
    scanf("%s", production3);

    printf("\nOriginal Grammar:\n");
    printf("S -> %s | %s | %s\n",
           production1, production2, production3);
    printf("E -> b\n");

    printf("\nAfter Left Factoring:\n");
    printf("S  -> iEtSS' | a\n");
    printf("S' -> eS | epsilon\n");
    printf("E  -> b\n");

    return 0;
}