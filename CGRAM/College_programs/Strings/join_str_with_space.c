#include<stdio.h>
#include<string.h>
// strcat(destination, source);
int main()
{
    char str[30]="", str2[30] = "", str3[60]="";
    int i,j, len;
    printf("Enter a string 1 : ");
    gets(str);

    printf("Enter a string 2 : ");
    gets(str2);

    for (i=0; str[i] != '\0'; i++)
    {
        str3[i] = str[i];
    }

    str3[i] = ' ';
    i++;
    len = i;

    for (j=0; str2[j] != '\0'; j++, i++)
    {
        str3[len-1+j] = str2[j];
    }

    str3[j] = '\0';

    // // str[len-1] = ' ';
    // // len += 1;

    // for (i=0; str2[i]!='\0'; i++)
    // {
    //     str3[i] = str[i]
    //     str[len-1+i] = str2[i];
    // }
    // str[len-1+i] = '\0';



    printf("\nConcatenated string = %s", str3);

    return 0;
}