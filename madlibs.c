#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20];
    char pluralNoun[20];
    char celebrityFirst[20];
    char celebrityLast[20];

    printf("Enter a color of no more than 20 characters: ");
    scanf("%s", color);
    printf("Enter a plural noun of no more than 20 characters: ");
    scanf("%s", pluralNoun);
    printf("Enter celebrity first and last name of no more than 20 characters: ");
    scanf("%s%s", celebrityFirst, celebrityLast);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityFirst, celebrityLast);

    return 0;
}