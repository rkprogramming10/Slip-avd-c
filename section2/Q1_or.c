#include <stdio.h>
// declare the date of birth in structure.........
struct date
{
    int day;
    int month;
    int year;
};
// declare student information in stucture
struct student
{
    char name[50];
    int roll;
    char address[50];
    struct date dob;
};
main()
{
    int i, j, n;
    struct student a[50];
    {
        //It helps to store data of n students
        printf("How many data you want to input? :: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            // it allows to enter the name //user define
            printf("Enter your name:: ");
            scanf("%s", &a[i].name);
            //it allows to enter the rollno //user define
            printf("Enter your rollno:: ");
            scanf("%d", &a[i].roll);
            // it allows to enter the address// user define
            printf("Enter your address:: ");
            scanf("%s", &a[i].address);
            // it allows to enter the Date of Birth // user define
            printf("Enter your Date of Birth (dd/mm/yy):: ");
            scanf("%d%d%d", &a[i].dob.day, &a[i].dob.month, &a[i].dob.year);
        }
        printf("\n");

        for (j = 0; j < n; j++)
        {
            // print the name which is store in data
            printf("Name :- %s \n ", a[j].name);
            // print the rollno which is store in data
            printf("Roll Number :- %d\n", a[j].roll);
            // print the address which is store in data
            printf("Address :- %s \n ", a[j].address);
            // print the Data of Birth which is store in data.....
            printf("Date of Birth(dd/mm/yy) :- %d/%d/%d\n", a[j].dob.day, a[j].dob.month, a[j].dob.year);
            printf("\n");
        }
    }
}