#include<stdio.h>

int main(){
    int *a,*b,x,y,swap;
    printf("Enter the two Number:: ");
    scanf("%d%d",&x,&y);

    printf("Before Swaping\nx::%d\ny::%d",x,y);

    a=&x;
    b=&y;


    swap=*b;
    *b=*a;
    *a=swap;

    printf("\nAfter the swapping\nx::%d\ny::%d",x,y);
    return 0;
}