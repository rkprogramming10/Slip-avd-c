#include<stdio.h>
#include<conio.h>

struct emp
{
    int id, salary;
    char name[10000];
}e[100];

// Accept details of the Employees
void accept(int n){
    printf("\nEnter Empolyee Id:: ");
    scanf("%d",&e[n].id);
    printf("\nEnter Employee Name:: ");
    scanf("%s",&e[n].name);
    printf("\nEnter Employee Salary:: ");
    scanf("%d",&e[n].salary);
}

//Display Details of employee
void display(int n){
    printf("\nEmployee id is:: %d\n",e[n].id);
    printf("\nEmployee Name is:: %s\n",e[n].name);
    printf("\nEmployee Salary is:: %d\n",e[n].salary);
}

void main(){
    int d,n,i,sal;
    do
    {
        printf("1.)Accept Details\n2.)Display Details\n3.)Display Employee by salary\n4.)Exit");
        printf("\nEnter Your Choice:: ");
        scanf("%d",&d);
        switch (d)
        {
        case 1:
            printf("Enter the Number of Employes:: ");
            scanf("%d",&n);
            for (i = 0; i < n; i++)
            {
                accept(i);
            }
            
            break;
        case 2:
            printf("\nDetails of Employees...........");
            for (i = 0; i < n; i++)
            {
                display(i);
            }
            
            break;
        case 3:
        printf("Enter the Employee salary:: ");
        scanf("%d",&sal);
        for (i = 0; i < n; i++)
        {
            if (sal == e[i].salary)
            {
                display(i);
                break;
            }
            
        }
        
        
        default: printf("Exit\n");
            break;
        }
    } while (d < 4);
    
}