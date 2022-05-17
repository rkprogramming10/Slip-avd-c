#include <stdio.h>
#include<stdlib.h>

int main(){
    int n, sum=0,number;
    double *data;
    printf("Enter the Total No. of Elements:: ");
    scanf("%d",&n);

    // Allocating memory by using dynamic memory Allocation
    data = (double *)calloc(n, sizeof(double));
    if(data == NULL){
        printf("Error!!! memory not Allocated.....");
        exit(0);
    }

    // Storing numbers entered by the user..
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:: ",i+1);
        scanf("%lf",data + i);
    }

    // Finding the largest number
    for (int i = 1; i < n; ++i)
    {
        if (*data < *(data + i))
        {
            *data = *(data + i);
        }
    }
    printf("Largest number = %.2lf", *data);


    free(data);

    return 0;
}