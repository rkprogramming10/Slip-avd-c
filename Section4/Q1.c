#include <stdio.h>
int main()
{
    int x, y, *a, *b, swap;

    printf("Enter the Value:: ");
    scanf("%d%d", &x, &y);
    printf("\n");
    printf("Before Interchanging:: x=%d\n y=%d", x, y);

    a = &x;
    b = &y;

    swap = *b;
    *b = *a;
    *a = swap;
    printf("\n");

    printf("After Interchanging:: x=%d\ny=%d", x, y);
    return 0;
}
