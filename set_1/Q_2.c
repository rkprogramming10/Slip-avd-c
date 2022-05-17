#include <stdio.h>

int main(){
    float x[10], sum=0.0, avg;
    int i;
    float *px, *psum, *pavg;

    px = &x[0];
    psum = &sum;
    pavg = &avg;

    printf("Enter the Element in array:: ");
    for (i = 0; i < 7; i++)
    {
        scanf("%f",(px+i));
        *psum += *(px+i);
    }
    *pavg = *psum /5;
    printf("Sum of the element = %.2f\n",*psum);
    printf("Average of the element = %2.f",*pavg);

    return 0;
    
}