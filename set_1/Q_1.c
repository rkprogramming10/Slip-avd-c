#include <stdio.h>
#define MAXIMUM(x, y) ((x > y) ? x : y)

int main()
{
    int a, b, maximum;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    maximum = MAXIMUM(a, b);
    printf("Maximum number is: %d\n", maximum);

    return 0;
}






