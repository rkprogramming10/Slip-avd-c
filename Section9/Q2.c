#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int rno;
    char name[1000];
    float fees;
};

struct student s;

int main(){
    printf("Enter the Student Rollno.:: ");
    scanf("%d",&s.rno);
    printf("Enter the name of the Student:: ");
    scanf("%s",&s.name);
    printf("Enter the Student Fees:: ");
    scanf("%f",&s.fees); 
    
    void display(struct student s){
        printf("Rollno. of the student is::%d\n",s.rno);
        printf("Name of the student is::%d\n",s.name);
        printf("Student fees is::%f",s.fees);
    }

    display(s);
    return 0;
}