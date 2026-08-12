#include <stdio.h>
#include <string.h>

int main()
{
    char nonTerminal;
    char alpha[50], beta[50];

    printf("Enter the non-terminal: ");
    scanf(" %c", &nonTerminal);

    printf("Enter alpha (the part after %c): ", nonTerminal);
    scanf("%s", alpha);

    printf("Enter beta: ");
    scanf("%s", beta);

    printf("\nOriginal production:\n");
    printf("%c -> %c%s | %s\n", nonTerminal, nonTerminal, alpha, beta);

    printf("\nAfter eliminating left recursion:\n");
    printf("%c -> %s%c'\n", nonTerminal, beta, nonTerminal);
    printf("%c' -> %s%c' | epsilon\n",
           nonTerminal, alpha, nonTerminal);

    return 0;
}