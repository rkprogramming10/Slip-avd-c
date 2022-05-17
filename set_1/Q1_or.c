#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i;
    printf("Enter the Information of the Student.....\n");

    // storing information
    for (i = 0; i < 5; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter student name:: ");
        scanf("%s", s[i].firstName);
        printf("Enter student percentage:: \n\n");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("Name of the student is:: ");
        puts(s[i].firstName);
        printf("Percentage of the student:: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
