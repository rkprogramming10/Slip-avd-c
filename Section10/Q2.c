#include<string.h>
#include<stdio.h>

int main(){
    char s1[100],s2[100],s3[100];
    int O;

    printf("*`*`*``*`*`*`*Menu`*`*`*`**`*`*``*\n");
    printf("1.)Compare\n2.)Copy\n3.)Exit....\n");
    printf("Enter the Option:: ");
    scanf("%d",&O);

    switch (O)
    {
    case 1:
    printf("Enter the 1st String:: ");
    scanf("%s",&s1);
    printf("Enter the 2nd String:: ");
    scanf("%s",&s2);
        if (strcmp(s2,s1) == 0)
        {
            printf("String is Same....\n");
        }else{
            printf("String is not Same......\n");
        }
        break;

        case 2:
        printf("Enter the String:: ");
        scanf("%s",&s2);
        if (strcpy(s3,s2))
        {
            printf("String before Copied::%s\n",s2);
            printf("String after Copied::%s",s3);
        }
        
        break;
    
    default :
    printf("Exit");
        break;
    }
    
}