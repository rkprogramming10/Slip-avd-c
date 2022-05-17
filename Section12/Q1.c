#include <stdio.h>
#define MAX(a, b) (a > b ? a : b)
int main()
{
    int n1, n2, n3, max, max1;
    printf("\n Enter three numbers : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    max = MAX(n1, n2);
    max1 = MAX(max, n3);
    printf("\n Maximum of three numbers = %d", max1);
    return 0;
}