#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[500], s2[500];

    printf("Enter the First String:: ");
    scanf("%s", s1);
    printf("\n");
    printf("Enter the Second String:: ");
    scanf("%s", s2);

    if (strcmp(s1, s2) == 0)
    {
        printf("String comparison Successfull....\n");
        printf("Enter Strings are same..........");
    }
    else
    {
        printf("String comparison Successfull.......\n");
        printf("Strings are Differents.....");
    }
}