#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20], pluralNoun[20], celebrity[20];

    printf("Enter a color of no more than 20 characters: ");
    scanf("%s", color);
    printf("Enter a plural noun of no more than 20 characters: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity of no more than 20 characters: ");
    scanf("%s", celebrity);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);

    return 0;
}