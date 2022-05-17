#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1,*fp2;
    char name[1000],c;

    printf("Enter the File name to open in Reading Mode:: ");
    scanf("%s",&name);

    fp1 = fopen(name,"r");
    if (fp1 == NULL)
    {
        printf("Can not open the %s file\n",name);
        exit(0);
    }

    printf("Enter the file name to open in writting Mode:: ");
    scanf("%s",&name);

    fp2 = fopen(name,"w");
    if (fp2 == NULL)
    {
        printf("Can not open the %s file\n",name);
        exit(0);
    }

    c = fgetc(fp1);
    while (c != EOF)
    {
        fputc(c,fp2);
        c = fgetc(fp1);
    }

    printf("Content copied from %s",name);

    fclose(fp1);
    fclose(fp2);

    return 0;
    
    
    
}