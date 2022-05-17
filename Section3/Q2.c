#include <stdio.h>
struct student
{
    char name[1000];
    int roll;
} main()
{
    int i, j, n;
    struct student a[1000];
    {
        printf("Enter how many details do you want's to Enter:: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            // Enter the students details.......
            printf("Enter Students Name:: ");
            scanf("%s", &a[i].name);
            /*___________________________________________________*/
            // Enter the Students Rollno......
            printf("Enter the Students Rollno.:: ");
            scanf("%d", &a[i].roll);
            /*______________________________________________________*/
        }
        printf("\n");
        for (j = 0; j < n; j++)
        {
            // Display the Students Name.........
            printf("Name of the Student is:: %s \n", a[j].name);
            // Display the Students Rollno.......
            printf("Rollno. of the students is:: %d", a[j].roll);
            printf("\n");
        }
    }
}