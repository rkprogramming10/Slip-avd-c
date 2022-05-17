#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct item
{
    int code;
    char name[30];
    float price;
};
int main()
{
    struct item p[50];
    int n, i, ch;
    char key_name[30];
    printf("\n Enter how many items? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\n Enter item code%d ", i + 1);
        scanf("%d", &p[i].code);
        printf("\n Enter item name%d", i + 1);
        scanf("%s", p[i].name);
        printf("\n Enter price%d", i + 1);
        scanf("%f", &p[i].price);
    }
    printf("\n\n 1. Display all items having price greater than 250");
    printf("\n 2. Search item\n 3. Exit");
    printf("\nEnter your choice (1-3) : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\n\n Details of Items are:");
        for (i = 0; i < n; i++)
        {
            if (p[i].price > 250)
            {
                printf("\n\n Item code : %d", p[i].code);
                printf("\n Item name : %s", p[i].name);
                printf("\n Item price : %f", p[i].price);
            }
        }
        break;
    case 2:
        printf("\n Enter name to search : ");
        scanf("%s", key_name);
        for (i = 0; i < n; i++)
        {
            if (strcmp(p[i].name, key_name) == 0)
            {
                printf("\n\n Details of Item are :");
                printf("\n Item code : %d ", p[i].code);
                printf("\n Item name : %s", p[i].name);
                printf(" \n Item Price : %f", p[i].price);
            }else{
                printf("Item's are not found!!!!");
            }
        }
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("\n Invalid input...");
    }
    return 0;
}