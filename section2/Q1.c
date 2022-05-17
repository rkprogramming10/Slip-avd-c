#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100];
    int len;
    printf("Enter the Strings:: ");
    scanf("%s", &str1);
    len = strlen(str1);
    printf("lenght of the String is:: %d", len);
}