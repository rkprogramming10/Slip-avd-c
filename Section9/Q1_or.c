#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("test.txt","r");
    if (fp1 == NULL)
    {
        puts("File does not Found!!!!.....\n");
        exit(1);
    }
    fp2 = fopen("test2.txt","w");
    if (fp2 == NULL)
    {
        puts("File does not Exist!!!!.....\n");
        fclose(fp1);
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch,fp2);
    }
    printf("File copied Successfully.......\n");
    return 0;
    
    
}