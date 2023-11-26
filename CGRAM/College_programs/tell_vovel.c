#include<stdio.h>
// keep in mind to use single quotes ' ' with characters, otherwise output will  be wrong. I have already tried with " "
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if ((ch<='z' && ch>='a') || (ch<='Z' && ch>='A'))
        {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            printf("It is a vovel");
        }
        else
        {
            printf("It is a consonant");
        }
    }
    else
    {
        printf("It is not an alphabet !!");
    }
    return 0;
}