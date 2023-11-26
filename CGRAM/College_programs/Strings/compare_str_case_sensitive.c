#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30]="", str2[30]="";
    int l1,l2, same = 1;

    printf("Enter string 1 : ");
    gets(str1);
    printf("\nEnter string 2 : ");
    gets(str2);

    for (l1=0; str1[l1] != '\0'; l1++);
    for (l2; str2[l2] != '\0'; l2++);

    if (l1 != l2)
    {
        same = 0;
    
    }

    
    else
    {
        for (int i=0; str1[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                same = 0;
            }

        }
    }

    if (same == 1)
        printf("SAME !!!");

    else    
        printf("DIFFERENT !!");
    


    return 0;
}