#include <stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100],str3[100];

    printf("Enter the String 1:: ");
    gets(str1);
    printf("Enter the String 2:: ");
    gets(str2);

    strcpy(str3,str1);
    strcat(str3,str2);
    printf("Concatination Successfull ✔✔✔\n");
    printf("Concatinated string is:: %s",str3);

    return 0;
}