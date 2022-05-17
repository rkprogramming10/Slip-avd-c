#include<stdio.h>
#define PI 3.14;

int main(){
    float r,pi,area;

    printf("Enter the Value of Radius:: ");
    scanf("%f",&r);
    pi=PI;
    area = r*r*pi;
    printf("Area of a circle is:;%f\n",area);
    return 0;
}