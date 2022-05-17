#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int n, i;
    fp = fopen("squares.txt", "w");
    printf("\n Enter value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        putw(i * i, fp);
    printf("\n File Created Successfully......");

    return 0;
}