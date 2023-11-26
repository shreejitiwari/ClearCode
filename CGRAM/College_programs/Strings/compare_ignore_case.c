#include<stdio.h>
int main()
{
    char s1[30]="", s2[30]="", len1, len2, same=1;
    printf("Enter string 1 : ");
    gets(s1);
    printf("Enter string 2 : ");
    gets(s2);

    for (len1=0; s1[len1]!='\0'; len1++);
    for (len2=0; s2[len2]!='\0'; len2++);

    if (len1!=len2)
        same = 0;

    else
    {
        for (int i=0; i<=len1; i++)
        {
            if (s1[i]>='A' && s1[i]<='Z')
                s1[i] += 32;

            if (s2[i]>='A' && s2[i]<='Z')
                s2[i] += 32;            

            if (s1[i]!=s2[i])
                same=0;
        }
    }

    same?printf("Both strings are same"):printf("Different");


    return 0;
}