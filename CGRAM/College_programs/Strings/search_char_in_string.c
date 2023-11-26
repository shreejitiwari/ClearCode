#include<stdio.h>
int main()
{
    char s[30]="", ch;
    int found=0;
    printf("Enter a string : ");
    gets(s);
    
    printf("Enter the character you want to search in the string : ");
    scanf("%c",&ch);

    for (int i=0; s[i]!= '\0'; i++)
    {
        if (s[i]==ch)
        {
            printf("\n'%c' is found in '%s' @ index = %d and position = %d",ch,s,i,i+1);
            found=1;
        }
    }

    if (found==0)
    {
        printf("'%c' not found in '%s'", ch,s);
    }

    return 0;
}