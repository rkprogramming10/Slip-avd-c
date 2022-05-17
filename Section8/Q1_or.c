#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks,m1,m2;
} s[5];

int main()
{
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f%f%f", &s[i].marks,&s[i].m1,&s[i].m2);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks+s[i].m1+s[i].m2);
        printf("\n");
    }
    return 0;
}
