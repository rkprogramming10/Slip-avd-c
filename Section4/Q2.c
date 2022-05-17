#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[500], s2[500], s3[500];

    printf("enter the First String:: ");
    scanf("%s", &s1);

    strcpy(s3, s1);
    printf("String Copy Successfully.....\n");
    printf("Copied String is:: %s", s3);
    printf("\n");

    printf("For Comparison \n");
    printf("Enter the Second String:: ");
    scanf("%s", &s2);
    if (strcmp(s1, s2) == 0)
    {
        printf("Enter string are Equal......");
    }
    else
    {
        printf("Enter Strings are Different.......");
    }

    return 0;
}