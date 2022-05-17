#include <stdio.h>
#include <string.h>

int main()
{
    // for case 1;
    char s[100];
    int i;
    char opt;

    // for case 2;
    char text1[100];
    char text2[100];

    // for case 3;
    char str1[100];
    char str2[100];
    int value;

    // for case 4;
    char str4[100];
    char str3[100];
    int k, j;
    k = 0;

    do
    {
        printf("_-_-_-_-_-_-_-Menu_-_-_-_-_-_-_");
        printf("\n1) Convert strint to Uppercase \n2) Copy One String to Another \n3) Compare Two Strings \n4) Concatenate Two Strings \n5) Exit");
        printf("\n*****Enter Your Choice From the Above Menu:: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("Enter The Strings:: ");
            scanf("%s", &s);
            for (i = 0; s[i] != '\0'; i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = s[i] - 32;
                }
            }
            printf("\n Converted to Uppercase Successfully ");
            printf("\n Uppercase of the String is:: %s", s);

            break;
        case 2:
            /* Input string from user */
            printf("Enter any string:: ");
            scanf("%s", &text1);

            /* Copy text1 to text2 character by character */
            for (i = 0; text1[i] != '\0'; i++)
            {
                text2[i] = text1[i];
            }

            // Makes sure that the string is NULL terminated
            text2[i] = '\0';
            // For Output
            printf("First string = %s\n", text1);
            printf("Second string = %s\n", text2);
            break;

        case 3:
            printf("Enter The First String:: \n");
            scanf("%s", &str1);
            printf("Enter the second string:: ");
            scanf("%s", str2);
            // comparing both the strings using strcmp() function
            value = strcmp(str1, str2);
            if (value == 0)
                printf("strings are same");
            else
                printf("strings are not same");
            return 0;
            break;

        case 4:
            printf("Enter the String:: ");
            scanf("%s%s", &str4, &str3);
            while (str4[k] != '\0')
            {
                ++k;
            }

            for (j = 0; str3[j] != '\0'; ++j, ++k)
            {
                str4[k] = str3[j];
            }
            str4[k] = '\0';

            printf("After Concatenation:: ");
            printf("%s", str4);
            break;

        default:
            printf("Exit");
            break;
        }
    } while (opt != 5);
}